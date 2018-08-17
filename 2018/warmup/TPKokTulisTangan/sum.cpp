#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  ll ans = 0;
  while (n--) {
    ll x;
    cin >> x;

    ans += x;
  }

  cout << ans << endl;

  return 0;
}
