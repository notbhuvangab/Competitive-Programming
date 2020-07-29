#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int g;
    cin >> g;

    while (g--) {
      int i, n, q;
      cin >> i >> n >> q;

      if (n % 2 == 0) {
        cout << n / 2 << endl;
      } else {
        if (i == 1) {
          if (q == 1)
            cout << n / 2 << endl;
          else
            cout << n / 2 + 1 << endl;
        } else {
          if (q == 1)
            cout << n / 2 + 1 << endl;
          else
            cout << n / 2 << endl;
        }
      }
    }
  }
}