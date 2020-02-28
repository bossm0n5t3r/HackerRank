#include <iostream>
#include <string>
#include <vector>

using namespace std;

long substrCount(int n, string s) {
  vector<pair<char, long>> v;
  long cnt = 0;
  char cur = ' ';
  // 1st pass
  for (int i = 0; i < n; i++) {
    if (s[i] == cur)
      cnt++;
    else {
      if (cur != ' ') v.push_back({cur, cnt});
      cur = s[i];
      cnt = 1;
    }
  }
  v.push_back({cur, cnt});
  // 2nd pass
  long ans = 0;
  for (pair<char, long> i : v) ans += (i.second * (i.second + 1)) / 2;
  // 3rd pass
  for (long i = 1; i < (long)v.size() - 1; i++) {
    if (v[i - 1].first == v[i + 1].first && v[i].second == 1)
      ans += min(v[i - 1].second, v[i + 1].second);
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input02.txt", "r", stdin);
  int n;
  string s;
  cin >> n;
  cin >> s;
  cout << substrCount(n, s) << "\n";
  return 0;
}
