#include <iostream>
#include <string>

using namespace std;

int C[5001][5001];

int commonChild(string s1, string s2) {
  // LCS
  int N = s1.length();
  for (int r = 0; r <= N; r++) C[r][0] = 0;
  for (int c = 0; c <= N; c++) C[0][c] = 0;
  for (int r = 1; r <= N; r++) {
    for (int c = 1; c <= N; c++) {
      if (s1[r - 1] == s2[c - 1])
        C[r][c] = C[r - 1][c - 1] + 1;
      else
        C[r][c] = max(C[r][c - 1], C[r - 1][c]);
    }
  }
  return C[N][N];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input13.txt", "r", stdin);
  string s1, s2;
  cin >> s1 >> s2;
  cout << commonChild(s1, s2) << "\n";
  return 0;
}
