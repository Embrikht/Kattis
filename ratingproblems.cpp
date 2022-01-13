#include <iostream>
using namespace std;

int main() {
  int n, k, temp, nfirst;
  float maxsum=0, minsum=0;
  cin >> n >> k;
  nfirst = n;
  for (int i = 0; i < k; i++) {
    cin >> temp;
    maxsum += temp;
    minsum += temp;
    n--;
  }
  for (int i = 0; i < n; i++) {
    maxsum += 3;
    minsum -= 3;
  }
  cout << minsum/nfirst << " " << maxsum/nfirst << endl;
  return 0;
}
