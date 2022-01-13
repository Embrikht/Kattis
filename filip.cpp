#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string a, b, anew, bnew;
  int length, num1, num2;
  cin >> a >> b;
  length = a.size();
  for (int i = length-1; i >= 0; i--) {
    anew.push_back(a[i]);
    bnew.push_back(b[i]);
  }
  stringstream ss1, ss2;
  ss1 << anew;
  ss1 >> num1;
  ss2 << bnew;
  ss2 >> num2;

  if (num1 > num2) {
    cout << num1 << endl;
  }

  else {
    cout << num2 << endl;
  }

  return 0;
}
