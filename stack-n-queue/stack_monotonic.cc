#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int s[N], idx;

int main() {

  int prices[] = {4, 6, 2, 7};
  idx = 0;

  for (int i=0; i<sizeof(prices) / sizeof(int); i++) {
    while (idx > 0 && s[idx-1] >= prices[i]) idx--;
    s[idx++] = prices[i];

    for (int i=0; i<idx; i++) 
      printf("%d%c", s[i], i+1==idx?'\n': ' ');
  }
  return 0;
}
