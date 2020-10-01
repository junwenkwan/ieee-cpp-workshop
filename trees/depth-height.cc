#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
vector<vi> tree;
vi d, h;

void read_tree(vector<vi> &t) {
  int n, u, v;
  cin >> n;
  t.resize(n);
  for (int i=0; i<n-1; i++) {
    cin >> u >> v;
    t[u].push_back(v);
    t[v].push_back(u);
  }
}

void calc(int cur, int pa) {
  for (auto& child: tree[cur]) if (child != pa) {
    d[child] = d[cur] + 1;
    calc(child, cur);
    h[cur] = max(h[cur], h[child]+1);
  }
}

int main() {
  read_tree(tree);        // example of passing by reference
  d = vi(tree.size(), 0);
  h = vi(tree.size(), 0);
  calc(0, -1);
  for (int i=0; i<tree.size(); i++) {
    cout << h[i] << " " << d[i] << endl;
  }
  return 0;
}
