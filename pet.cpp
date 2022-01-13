#include <iostream>
using namespace std;


int main() {
  int iter=0, temp=0, answer=0, counter=0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> iter;
      temp += iter;
    }
    if (temp > answer) {
      answer = temp;
      counter = i + 1;
    }
    temp = 0;
  }
  cout << counter << " " << answer << endl;
  return 0;
}
