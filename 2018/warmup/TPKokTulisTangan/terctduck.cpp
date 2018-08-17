#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    map<char, bool> map;
    map['d'] = map['u'] = map['c'] = map['k'] = 0;

    string t = "kcud";
    for (int i = 0; i < s.size(); i++) {
      if (t.back() == s[i]) {
        map[s[i]] = 1;
        t.pop_back();
      }
    }

    bool duck = map['d'] && map['u'] && map['c'] && map['k'];
    cout << (duck ? "YA" : "TIDAK") << endl;
  }

  return 0;
}
