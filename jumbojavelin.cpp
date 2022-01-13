#include <iostream>
using namespace std;

int main() {
  int answer, counter, temp;
  cin >> counter >> answer;
  while (counter > 1) {
    cin >> temp;
    answer += temp - 1;
    counter--;
  }
  cout << answer << endl;
  return 0;
}
