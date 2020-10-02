#include <bits/stdc++.h>

#include <math.h>

using namespace std;
struct Element {
  int dep, idx;
};
vector < Element > order;
vector < vector < int >> tree;
vector < int > ts; // timestamp of first visiting
vector < vector < int >> st;
int n;

void read_tree() {
  cin >> n;
  tree.resize(n);
  ts.resize(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }
}

void dfs(int cur, int pa, int depth) {
  // record timestamp
  ?
  order.push_back({depth, cur});
  for (const auto & c: tree[cur]) if (c != pa) {
      dfs(c, cur, depth + 1);
      order.push_back({depth, cur});
    }
}
void init_st() {
  int L = order.size();
  st.resize(L);
  // we need 2ˆk < n and 2ˆ(k+1) >= n
  int k = int(log2(L));
  // init space
  for (int i = 0; i < L; i++) st[i].resize(k + 1);
  // init value:
  // basic case
  for (int i = 0; i < L; i++) st[i][0] = ?
    // recursion
  for (int i = 1; i <= k; i++) {
    for (int j = 0; j < L; j++) {
      int l = j, r = ? ;
      st[j][i] = min(st[l][i - 1], st[r][i - 1]);
    }
  }
}
int LCA(int u, int v) {
  int i = ? , j = ? ;
  int k = (int) log2(abs(i - j) + 1);
  int res = min( ? , ? );
  return res;
}
int main() {
  read_tree();
  dfs(0, -1, 0);
  init_st();
  int m;
  cin >> m;
  while (m--) {
    int u, v;
    cin >> u >> v;
    int res = LCA(u, v);
    cout << res << endl;
  }
  return 0;
}