#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, reverse=0, rem;
  cin >> n;
  while (n != 0) {
    rem = n%10;
    reverse = reverse*10 + rem;
    n = floor(n /= 10);
  }
  cout << reverse << endl;
  return 0;
}
