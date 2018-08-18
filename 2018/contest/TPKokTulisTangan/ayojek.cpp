#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, d, r;
  while (cin >> n >> d >> r && (n > 0 && r > 0 && d > 0)) {
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    int b[n];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b, b + n, greater<int>());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
      int x = a[i] + b[i];
      if (x > d) ans += (x % d) * r;
    }

    cout << ans << endl;
  }

  return 0;
}
