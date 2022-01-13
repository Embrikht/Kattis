#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double c, w1, w2, sum=0;
  int l;
  cin >> c >> l;
  for (int i = 0; i < l; i++) {
    cin >> w1 >> w2;
    sum += w1*w2*c;
  }
  cout << setprecision(7) << fixed;
  cout << sum << endl;
  return 0;
}
