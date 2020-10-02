#include <bits/stdc++.h>

using namespace std;
vector < int > seg;
vector < int > arr;
int n;
const int INF = 1e8;
void read_arr() {
  cin >> n;
  arr.resize(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
}
void build_tree(int l, int r, int idx) {
  
  if (l == r) { // base case
    seg[idx] = arr[l];
    return;
  }
  int mid = (l + r) >> 1;
  build_tree(l, mid, idx << 1);
  build_tree(mid + 1, r, idx << 1 | 1);
  // push up
  seg[idx] = min(seg[idx << 1], seg[idx << 1 | 1]);
}
int query(int ql, int qr, int L, int R, int idx) {
  if ( ? ) return seg[idx];
  int mid = (L + R) >> 1;
  int resl = INF, resr = INF;
  if ( ? ) resl = query(ql, qr, L, mid, idx << 1);
  if ( ? ) resr = query(ql, qr, mid + 1, R, idx << 1 | 1);
  return min(resl, resr);
}
int main() {
  read_arr();
  // we will need about ? space
  seg.resize( ? );
  build_tree(0, n - 1, 1);
  int m;
  cin >> m;
  while (m--) {
    int l, r;
    cin >> l >> r;
    int res = query(l, r, 0, n - 1, 1);
    cout << res << endl;
  }
  return 0;
}