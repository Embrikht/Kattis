#include <iostream>
using namespace std;

int main() {
  int count=1, n;
  string line;
  cin >> n;
  for (int i=0; i < n; i++)
    if (count%2 == 1) {
      cin >> line;
      cout << line << endl;
      count++;
    }
    else {
      cin >> line;
      count++;
    }
  return 0;
}
