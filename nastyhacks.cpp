#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int r, e, c, sum;
    cin >> r >> e >> c;
    sum = e - c;
    if (r < sum) {
      cout << "advertise" << endl;
    }
    else if (r == sum) {
      cout << "does not matter" << endl;
    }
    else {
      cout << "do not advertise" << endl;
    }
  }
  return 0;
}
