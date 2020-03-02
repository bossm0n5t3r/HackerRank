#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void maximumToys(vector<int> prices, int k) {
  sort(prices.begin(), prices.end());
  int sum = 0;
  for (int i = 0; i < (int)prices.size(); i++) {
    sum += prices[i];
    if (sum > k) {
      cout << i << "\n";
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> prices(n);
  for (int i = 0; i < n; i++) cin >> prices[i];
  maximumToys(prices, k);
  return 0;
}
