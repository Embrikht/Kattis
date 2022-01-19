#include <iostream>
using namespace std;

int main() {
  double n, sum, temp, nfinal;
  double answer;
  cin >> n;
  nfinal = n;
  for (int i=0; i < n; i++) {
    cin >> temp;
    if (temp == -1) {
      nfinal -= 1;
    }
    else {
      sum += temp;
    }
  }
  cout.precision(16);
  cout << fixed;
  answer = sum / nfinal;
  cout << answer << endl;
  return 0;
}
