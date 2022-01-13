#include <iostream>
#include <cmath>
using namespace std;

int iterate(int x) {
  if (x==1) {
    return 3;
  }
  else if (x==2) {
    return 5;
  }
  else {
    return 2*iterate(x-1)-1;
  }
}

int main() {
  int n, iter, answer;
  cin >> n;
  iter = iterate(n);
  answer = iter*iter;
  cout << answer << endl;
  return 0;
}

// 2^n+1
