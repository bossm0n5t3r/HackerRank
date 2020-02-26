#include <iostream>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(int arr[6][6]) {
  int max = -63;
  for (int r = 0; r < 4; r++) {
    for (int c = 0; c < 4; c++) {
      int sum = arr[r + 1][c + 1];
      for (int i = 0; i < 3; i++) {
        sum += arr[r][c + i];
        sum += arr[r + 2][c + i];
      }
      if (sum > max) max = sum;
    }
  }
  return max;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[6][6];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }
  int result = hourglassSum(arr);
  cout << result << "\n";
  return 0;
}
