#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string newnumber;
  char karakter;
  int n, res, length, iter=1, integer, result=0;
  cin >> n;
  while (n > 0) {
    res = n%2;
    n = n/2;
    stringstream ss;
    ss << newnumber << res;
    ss >> newnumber;
  }
  length = newnumber.size();
  for (int j = 0; j < length-1; j++) {
    iter *= 2;
  }
  for (int i = 0; i < length; i++) {
    karakter = newnumber[i];
    integer = karakter - 48;
    result += integer*iter;
    iter /= 2;
  }
  cout << result << endl;
  return 0;
}
