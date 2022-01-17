#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, e;
  int check;
  cin >> a >> b >> c >> d >> e;
  cin >> check;

  if (check >= a){
    cout << "A" << endl;
  }

  else if (b <= check && check < a){
      cout << "B" << endl;
  }

  else if (c <= check && check < b){
      cout << "C" << endl;
  }

  else if (d <= check && check < c) {
      cout << "D" << endl;
  }

  else if (e <= check && check < d){
      cout << "E" << endl;
  }

  else {
    cout << "F" << endl;
  }
  return 0;
}
