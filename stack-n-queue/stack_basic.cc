#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int s[N], idx;

int main() {

  char str[] = "EAS*Y*QUE***ST***IO*N***";
  // init stack
  idx = 0;

  for (int i=0; i<strlen(str); i++) {
    if (str[i] != '*') {
      s[idx++] = str[i];
    }
    else {
      printf("%c", s[--idx]);
    }
  }
  printf("\n");
  return 0;
}
