#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
      int x;
      cin >> x;

      if (x < 60) ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
