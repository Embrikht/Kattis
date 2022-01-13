#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, b;
  float p, bpm, abpm1, abpm2, variance;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> p;
    bpm = 60*b/p;
    variance = 60 / p;
    abpm1 = bpm - variance;
    abpm2 = bpm + variance;
    cout << abpm1 << " " << bpm << " " << abpm2 << endl;
  }
  return 0;
}
