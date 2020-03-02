#include <iostream>
#include <string>

using namespace std;

void alternatingCharacters(string input) {
  int length = input.length();
  if (length == 1) {
    cout << "0\n";
    return;
  }
  int cnt = 0;
  for (int i = 1; i < length; i++) {
    if (input[i] == input[i - 1]) cnt++;
  }
  cout << cnt << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while (q--) {
    string input;
    cin >> input;
    alternatingCharacters(input);
  }
  return 0;
}
