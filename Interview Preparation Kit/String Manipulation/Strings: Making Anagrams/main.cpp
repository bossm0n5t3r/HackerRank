#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a, b;
  int cnt[26] = {0};
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++) cnt[a[i] - 'a']++;
  for (int i = 0; i < b.length(); i++) cnt[b[i] - 'a']--;
  int result = 0;
  for (int i = 0; i < 26; i++) result += abs(cnt[i]);
  cout << result << "\n";
  return 0;
}
