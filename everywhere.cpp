#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


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
      }
    }
    result = arr.size();
    cout << result << endl;
  }
  return 0;
}
