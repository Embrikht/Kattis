#include <iostream>
using namespace std;

int main() {
  int n, k, temp, answer;
  cin >> n >> k;
  answer = n;
  for (int i = 0; i < k; i++) {
    cin >> temp;
    answer += n-temp;
  }
  cout << answer << endl;
  return 0;
}
