#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  int tests;
  cin >> tests;
  while (tests--) {
    int n,n2;
  cin >> n;
  n2=n;
  vector<int> a;
  //vector<int> dp(n);
  while(n2--)
  {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  int maxres=0;
  for (int i = n - 1; i >= 0; i--) {
    int nuevoi = i + a[i];
    if (nuevoi < n) {
      a[i] += a[nuevoi];
    }
    if(maxres<a[i])
      maxres=a[i];
  }
  cout << maxres << endl;
  }
  return 0;
}