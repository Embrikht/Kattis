#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  string word, temp;
  int length, count=0;
  cin >> word;
  length = word.size();
  vector <string> arr;
  for (int i = 0; i < length; i++) {
    temp = word[i];
    arr.push_back(temp);
  }
  for (int j = 1; j < length; j++) {
    if (arr[j-1] == "s" && arr[j-1] == arr[j]) {
      count++;
    }
  }
  if (count > 0) {
    cout << "hiss" << endl;
  }
  else {
    cout << "no hiss" << endl;
  }
  return 0;
}

/*
int main() {
  int t, n, result;
  string temp;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    vector <string> arr;
    for (int j = 0; j < n; j++) {
      vector <string>::iterator iter;
      cin >> temp;
      iter = find(arr.begin(), arr.end(), temp);
      if (iter == arr.end()) {
        arr.push_back(temp);
*/
