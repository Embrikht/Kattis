#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int n, number, power, length, iter=1, sum=0;
  string inputs, stringnumber;

  cin >> n;

  for (int i = 0; i < n; i++) {
      cin >> inputs;
      length = inputs.size();

      for (int i = 0; i < length-1; i++) {
        stringnumber.push_back(inputs[i]);
      }

      stringstream ss;
      ss << stringnumber;
      ss >> number;

      stringstream pow;
      pow << inputs[length-1];
      pow >> power;

      while (power > 0) {
        iter = iter*number;
        power--;
      }
      sum += iter;
      stringnumber = "";
      iter = 1;
  }

  cout << sum << endl;
  return 0;
}
