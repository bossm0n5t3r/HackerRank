#include <iostream>
#include <vector>

using namespace std;

void minimumBribes(vector<int> q) {
  int max = 0;
  for (int i = 0; i < (int)q.size(); i++) {
    int original_pos = i + 1;
    int dist = q[i] - original_pos;
    if (dist > max) max = dist;
  }
  if (max > 2) {
    cout << "Too chaotic\n";
    return;
  }
  int cnt = 0;
  int *arr = q.data();
  while (true) {
    int n = (int)q.size();
    bool swaped = false;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
        swaped = true;
        cnt++;
      }
    }
    n--;
    if (!swaped) break;
  }
  cout << cnt << "\n";
}

int main() {
  // freopen("input09.txt", "r", stdin);
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int test_case = 0; test_case < t; test_case++) {
    int n, tmp;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
      cin >> tmp;
      q.push_back(tmp);
    }
    minimumBribes(q);
  }
  return 0;
}
