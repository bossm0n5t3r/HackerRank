#include <iostream>

using namespace std;

int arr[10000001];

int main() {
  // freopen("input13.txt", "r", stdin);
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, a, b, k;
  cin >> n >> m;
  while (m--) {
    cin >> a >> b >> k;
    arr[a] += k;
    if (b + 1 <= n) arr[b + 1] -= k;
  }
  long max = 0, x = 0;
  for (int i = 1; i <= n; i++) {
    x += arr[i];
    if (x > max) max = x;
  }
  cout << max << "\n";
  return 0;
}
