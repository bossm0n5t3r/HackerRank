#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
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
  ofstream fout(getenv("OUTPUT_PATH"));
  vector<vector<int>> arr(6);
  for (int i = 0; i < 6; i++) {
    arr[i].resize(6);
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  int result = hourglassSum(arr);
  fout << result << "\n";
  fout.close();
  return 0;
}
