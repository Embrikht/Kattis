#include <iostream>
using namespace std;

int main() {
  int pressed, count=0, sum=0, temp;
  cin >> pressed;
  if (pressed%2 == 1) {
    cout << "still running" << endl;
    return 0;
  }
  for (int i = 0; i < pressed; i++) {
    if (count%2 == 0) {
      cin >> temp;
      sum = sum - temp;
      count++;
    }
    else {
      cin >> temp;
      sum = sum + temp;
      count ++;
    }
  }
  cout << sum << endl;
  return 0;
}
