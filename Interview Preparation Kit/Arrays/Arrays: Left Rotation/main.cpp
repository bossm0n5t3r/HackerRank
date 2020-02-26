#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, d, tmp;
  cin >> n >> d;
  vector<int> arr;
  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    arr.push_back(tmp);
  }
  while (d--) {
    int tmp = arr[0];
    arr.erase(arr.begin());
    arr.push_back(tmp);
  }
  for (int n : arr) cout << n << " ";
  return 0;
}
