#include <iostream>
#include <queue>

using namespace std;

int jump[101];
bool visited[101];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, tmp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp == 1) visited[i] = true;
  }
  queue<int> q;
  q.push(0);
  visited[0] = true;
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    if (cur == n - 1) break;
    if (cur + 2 < n && !visited[cur + 2]) {
      visited[cur + 2] = true;
      jump[cur + 2] = jump[cur] + 1;
      q.push(cur + 2);
    }
    if (cur + 1 < n && !visited[cur + 1]) {
      visited[cur + 1] = true;
      jump[cur + 1] = jump[cur] + 1;
      q.push(cur + 1);
    }
  }
  cout << jump[n - 1] << "\n";
  return 0;
}
