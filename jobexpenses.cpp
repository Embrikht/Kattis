#include <iostream>
using namespace std;


int main() {
  int sum=0, n, integer;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> integer;
    if (integer < 0) {
    sum += integer * -1;
    }
  }
  cout << sum << endl;
  return 0;
}
