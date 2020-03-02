#include <iostream>
#include <set>
#include <string>

using namespace std;

void isValid(string s) {
  int cnt[26] = {0};
  set<int> set;
  for (int i = 0; i < s.length(); i++) cnt[s[i] - 'a']++;
  for (int i = 0; i < 26; i++) {
    if (cnt[i] > 0) set.insert(cnt[i]);
  }
  int setSize = set.size();
  if (setSize > 2)
    cout << "NO\n";
  else if (setSize == 1)
    cout << "YES\n";
  else {
    int min = *set.begin();
    int minCnt = 0;
    int sum = 0;
    for (int i = 0; i < 26; i++) {
      if (cnt[i] > 0) {
        if (cnt[i] == min) minCnt++;
        cnt[i] -= min;
        sum += cnt[i];
      }
    }
    if (minCnt == 1 || sum <= 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input13.txt", "r", stdin);
  string s;
  cin >> s;
  isValid(s);
  return 0;
}
