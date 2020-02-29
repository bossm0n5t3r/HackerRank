#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  long n;
  cin >> s;
  cin >> n;
  long aCnt = 0;
  long length = s.length();
  for (char c : s) {
    if (c == 'a') aCnt++;
  }
  long result = aCnt * (n / length);
  for (long i = 0; i < n % length; i++) {
    if (s[i] == 'a') result++;
  }
  cout << result << "\n";
  return 0;
}
