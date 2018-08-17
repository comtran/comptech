#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m, l;
    cin >> n >> m >> l;

    int ans = l;
    int a = max(n, m), b = min(n, m);

    ans -= a * (ans / a);
    ans -= b * (ans / b);

    cout << (ans == 0 ? "BISA" : "GAK") << endl;
  }

  return 0;
}
