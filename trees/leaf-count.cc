#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
vector<vi> tree;
vi cnt;

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
  if (tree[cur].size() > 1) {
    for (auto& child: tree[cur]) if (child != pa) {
      calc(child, cur);
      cnt[cur] += cnt[child];
    }
  }
  else cnt[cur] = 1;
}

int main() {
  // example of passing by reference
  read_tree(tree);
  cnt = vi(tree.size(), 0);
  calc(0, -1);
  for (int i=0; i<tree.size(); i++) {
    cout << cnt[i] << endl;
  }
  return 0;
}
