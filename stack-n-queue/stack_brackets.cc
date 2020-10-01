#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int s[N], idx;

int main() {

  char str[] = "(())";
  idx = 0;
  for (int i=0; str[i] > 0; i++) {
    if (str[i] == '(') {
      s[idx++] = i;
    }
    else {
      printf("%d %d\n", s[--idx], i);
    }
  }
  return 0;
}
