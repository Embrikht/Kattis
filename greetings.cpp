#include <iostream>
#include <string>
using namespace std;


int main() {
  string inp, answer, temp, check = "e";
  int length;
  char ch = 'e';
  cin >> inp;
  length = inp.size();
  for (int i = 0; i < length; i++) {
    if (inp[i] == ch) {
      answer.push_back(ch);
      answer.push_back(ch);
    }
    else {
      temp = inp[i];
      answer += temp;
    }
  }
  cout << answer << endl;
  return 0;
}
