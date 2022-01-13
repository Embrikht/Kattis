#include <iostream>
using namespace std;


int main() {
  int n, k, temp, sum=0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k;
    cin >> temp;
    sum += temp;
    for (int j = 0; j < k-1; j++) {
      cin >> temp;
      sum += temp - 1;
    }
    cout << sum << endl;
    sum = 0;
  }
  return 0;
}
