#include <iostream>
#include <cmath>
using namespace std;


int main() {
  float numart, impfac, n, count=0;
  cin >> numart >> impfac;
  n = numart*impfac;
  while (count == 0) {
    float temp = ceil(n/numart);
    if (temp == impfac) {
      n--;
    }
    else {
      count++;
    }
  }
  cout << n+1 << endl;
  return 0;
}
