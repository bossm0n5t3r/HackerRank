#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // input  :   U U D D  D  D  U U U
  // status : 0 1 2 1 0 -1 -2 -1 0 1
  // check  : F F F F F  T  T  T F F
  int n, status = 0, valleys = 0;
  bool inValley = false;
  char c;
  cin >> n;
  while (n--) {
    cin >> c;
    if (c == 'U')
      status++;
    else
      status--;
    if (!inValley && status < 0) {
      inValley = true;
      valleys++;
    } else if (status == 0)
      inValley = false;
  }
  cout << valleys << "\n";
  return 0;
}
