#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  double semiper = (s1 + s2 + s3 + s4) / 2;
  double answer = sqrt((semiper - s1)*
                       (semiper - s2)*
                       (semiper - s3)*
                       (semiper - s4));
  cout.precision(14);
  cout << fixed;
  cout << answer << endl;
  return 0;
}
