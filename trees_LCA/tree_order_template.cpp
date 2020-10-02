#include <bits/stdc++.h>

using namespace std;
const int N = 100;
struct Element {
  int dep, idx;
};
vector < Element > order;
vector < vector < int >> tree;
int n;
void read_tree() {
  cin >> n;
  tree.resize(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }
}
void dfs(int cur, int pa, int depth) {
  // figure out where to add "order.push_back({depth, index})"
  ?
  for (const auto & c: tree[cur]) if (c != pa) {
      ?
      dfs(c, cur, depth + 1); 
      ?
    } 
    ?
}

int main() {
  read_tree();
  dfs( ? , ? , ? );
  // print out elements
  for (auto & elem: order) {
    cout << elem.dep << " " << elem.idx << endl;
  }
  return 0;
}