#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

struct Player {
  int score;
  string name;
};

class Checker {
 public:
  static int comparator(Player a, Player b) {
    if (a.score > b.score)
      return 1;
    else if (a.score < b.score)
      return -1;
    else {
      if (a.name.length() > b.name.length()) {
        for (int i = 0; i < b.name.length(); i++) {
          char A = a.name[i];
          char B = b.name[i];
          if ('A' <= A && A <= 'Z') A -= ('A' - 'a');
          if ('A' <= B && B <= 'Z') B -= ('A' - 'a');
          if (A < B)
            return 1;
          else if (A > B)
            return -1;
        }
        return -1;
      } else if (a.name.length() < b.name.length()) {
        for (int i = 0; i < a.name.length(); i++) {
          char A = a.name[i];
          char B = b.name[i];
          if ('A' <= A && A <= 'Z') A -= ('A' - 'a');
          if ('A' <= B && B <= 'Z') B -= ('A' - 'a');
          if (A < B)
            return 1;
          else if (A > B)
            return -1;
        }
        return 1;
      } else {
        for (int i = 0; i < a.name.length(); i++) {
          char A = a.name[i];
          char B = b.name[i];
          if ('A' <= A && A <= 'Z') A -= ('A' - 'a');
          if ('A' <= B && B <= 'Z') B -= ('A' - 'a');
          if (A < B)
            return 1;
          else if (A > B)
            return -1;
        }
        return 0;
      }
    }
  }
};

bool compare(Player a, Player b) {
  if (Checker::comparator(a, b) == -1) return false;
  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<Player> players;
  string name;
  int score;
  for (int i = 0; i < n; i++) {
    cin >> name >> score;
    Player player;
    player.name = name, player.score = score;
    players.push_back(player);
  }
  sort(players.begin(), players.end(), compare);
  for (int i = 0; i < players.size(); i++) {
    cout << players[i].name << " " << players[i].score << endl;
  }
  return 0;
}
