#include <iostream>
#include <vector>

using namespace std;

int n, cnt;
int arr[100001];
int pos[100001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  // Initialize pos
  for (int i = 0; i < n; i++) pos[arr[i] - 1] = i;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (pos[i] != i) {
      // arr swap
      int tmp = arr[i];
      arr[i] = arr[pos[i]];
      arr[pos[i]] = tmp;
      // pos update
      pos[arr[pos[i]] - 1] = pos[i];
      // cnt++
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
