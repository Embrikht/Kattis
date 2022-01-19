#include <iostream>
#include <string>
using namespace std;

int main() {
  string inp, answer;
  int length, count = 0;
  cin >> inp;
  length = inp.size();
  answer = answer + inp[0];
  for (int i = 1; i < length; i++) {
    if (count == 1) {
      answer = answer + inp[i];
      count = 0;
    }
    if (inp[i] == '-') {
      count += 1;
    }
  }
  cout << answer << endl;
  return 0;
}
