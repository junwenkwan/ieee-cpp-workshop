#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int que[N], front, tail;

int main() {
  char str[] = "EAS*Y*QUE***ST***IO*N***";
  // init queue
  front = tail = 0;
  for (int i=0; i<strlen(str); i++) {
    if (str[i] != '*') {
      que[tail++] = str[i];
    }
    else {
      printf("%c", que[front++]);
    }
  }
  printf("\n");
  return 0;
}
