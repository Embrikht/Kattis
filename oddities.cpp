#include <iostream>
using namespace std;

int main() {
  int n, test;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> test;
    if (test%2 == 0) {
      cout << test << " is even" << endl;
    }
    else {
      cout << test << " is odd" << endl;
    }
  }
return 0;
}
