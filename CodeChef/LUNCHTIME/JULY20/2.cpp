#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    if (n * m > 1) {
      x = min(x, y);
      y = min(y, 2 * x);
      cout << (n * m + 1) / 2 * x + (n * m) / 2 * (y - x) << '\n';
    } else {
      cout << x << endl;
    }
  }
}