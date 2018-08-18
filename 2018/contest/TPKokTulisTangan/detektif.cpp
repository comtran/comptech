#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string s;
  cin >> s;

  int n;
  cin >> n;

  while (n--) {
    string t;
    cin >> t;

    int p = s.size(), q = t.size();

    bool match = 1;
    if (p == 0)
      match = q == 0;
    else {
      vector<vector<bool>> tb (p + 1, vector<bool>(q + 1, 0));
      tb[0][0] = 1;

      for (int i = 1; i <= q; i++)
        if (t[i - 1] == '*') tb[0][i] = tb[0][i - 1];

      for (int i = 1; i <= p; i++) {
        for (int j = 1; j <= q; j++) {
          if (t[j - 1] == '*')
            tb[i][j] = tb[i][j - 1] || tb[i - 1][j];
          else if (t[j - 1] == '?' || s[i - 1] == t[j - 1])
            tb[i][j] = tb[i - 1][j - 1];
          else
            tb[i][j] = 0;
        }
      }

      match = tb[p][q];
    }

    cout << (match ? "YES" : "NO") << endl;
  }

  return 0;
}
