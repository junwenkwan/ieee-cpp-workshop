#include <bits/stdc++.h>
using namespace std;

string expr;
typedef vector<int> vi;
vi match, s;

int calc(int l, int r) {
  int lhs, rhs, mid;
  if (expr[l] == '(') {
    lhs = calc(l+1, match[l]-1);
    mid = match[l] + 1;
  }
  else {
    lhs = int(expr[l] - '0');
    mid = l + 1;
  }

  char op = expr[mid];

  if (expr[mid+1] == '(') {
    rhs = calc(mid+2, match[mid+1]-1);
  }
  else {
    rhs = int(expr[mid+1] - '0');
  }
  
  int res;
  switch (op) {
    case '+': res = lhs + rhs; break;
    case '-': res = lhs - rhs; break;
    case '*': res = lhs * rhs; break;
  }
  return res;
}

int main() {

  while (cin >> expr) {
    match = vi(expr.size(), -1);
    s.clear();
    for (int i=0; i<expr.size(); i++) {
      if (expr[i] == '(') s.push_back(i);
      else if (expr[i] == ')') {
        match[s.back()] = i;
        s.pop_back();
      }
    }
    cout << calc(0, expr.size()-1) << endl;
  }
  return 0;
}
