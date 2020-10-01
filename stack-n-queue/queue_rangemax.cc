#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int que[N], front, tail;

int main() {
  int a[] = {1, 3, 2, 5, 4};
  int k = 2;

  front = tail = 0;
  for (int i=0; i<k; i++) {
    while (front < tail && a[que[tail-1]] <= a[i]) tail--;
    que[tail++] = i;
  }
  printf("%d\n", a[que[front]]);
  for (int i=1; i+k-1 < sizeof(a) / sizeof(int); i++) {
    while (front < tail && que[front] < i) front++;
    while (front < tail && a[que[tail-1]] <= a[i+k-1]) tail--;
    que[tail++] = i+k-1;
    printf("%d\n", a[que[front]]);
  }
  return 0;
}
