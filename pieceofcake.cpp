#include <iostream>
using namespace std;

int main() {
  int n, h, v, t=4;
  int temph, tempv, result;
  cin >> n >> h >> v;
  if (n-h >= n/2 && n-v >= n/2) {
    temph = n-h;
    tempv = n-v;
  }

  else if (n-h >= n/2 && n-v < n/2) {
    temph = n-h;
    tempv = v;
  }

  else if (n-h < n/2 && n-v >= n/2) {
    temph = h;
    tempv = n-v;
  }

  else {
    temph = h;
    tempv = v;
  }
  result = temph*tempv*t;
  cout << result << endl;
  return 0;
}
