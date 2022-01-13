#include <iostream>
using namespace std;

int main() {
  int n;
  float qaly, years, accum=0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> qaly >> years;
    accum += qaly * years;
  }
  cout << accum << endl;
  return 0;
}
