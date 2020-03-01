#include <iostream>

using namespace std;

int arr[601];

void countSwaps(int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    bool isSwaped = false;
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        isSwaped = true;
        int tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
        cnt++;
      }
    }
    if (!isSwaped) break;
  }
  cout << "Array is sorted in " << cnt << " swaps.\n";
  cout << "First Element: " << arr[0] << "\n";
  cout << "Last Element: " << arr[n - 1] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  countSwaps(n);
  return 0;
}
