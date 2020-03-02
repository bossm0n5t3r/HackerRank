#include <iostream>

using namespace std;

int socks[101];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, cnt = 0;
  cin >> n;
  while (n--) {
    int tmp;
    cin >> tmp;
    if (socks[tmp] == 0)
      socks[tmp]++;
    else {
      socks[tmp]--;
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
