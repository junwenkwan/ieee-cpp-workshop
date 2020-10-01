#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
vector<vi> tree;

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

int calc(int cur, int pa) {
  int res = 0;
  for (auto& child: tree[cur]) if (child != pa) {
    res = max(res, calc(child, cur) + 1);
  }
  return res;
}

int path_len(int root) {
  vi len;
  for (auto& child: tree[root]) if (child != root) {
    int v = calc(child, root);
    len.push_back(v+1);
  }
  sort(len.begin(), len.end(), greater<int>());
  return len.size() > 1? len[0] + len[1]: len[0];
}

int main() {
  read_tree(tree);
  int node;
  while (cin >> node) {
    cout << path_len(node) << endl;
  }
  return 0;
}
