#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double h, v;
  int temp;
  cin >> h >> v;
  temp = h / sin(v*M_PI/180.0) + 1;
  cout << temp << endl;
  return 0;
}
