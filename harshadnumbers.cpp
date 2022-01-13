#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string int_to_string(int x, string y) {
  stringstream ss;
  ss << x;
  ss >> y;
  return y;
};

int sum_int(int x, char y) {
  int temp;
  temp = y - 48;
  x += temp;
  return x;
};


int main() {
  int n, count=0;
  cin >> n;
  while (count == 0) {
    int length, sum=0;
    string number;
    number = int_to_string(n, number);
    length = number.size();

    for (int i = 0; i < length; i++) {
      sum = sum_int(sum,number[i]);
    }

    if (n%sum == 0) {
      cout << n << endl;
      count++;
    }

    else {
      n++;
    }
  }
  return 0;
}
