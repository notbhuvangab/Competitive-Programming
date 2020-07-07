#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() {

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
    ll n;
    cin >> n;
    ll t = n;

    if (n == 1)
      cout << "FastestFinger"
           << "\n";
    else if ((n % 2))
      cout << "Ashishgup"
           << "\n";
    else if (n == 2)
      cout << "AshishGup" << endl;
    else {
      if ((n / 2) % 2) {
        cout << "FastestFinger" << endl;
      } else {
        while (n % 2 == 0) {
          n /= 2;
        }
        if (n == 1)
          cout << "FastestFinger" << endl;
        else {
            if ((n / 2) % 2) {
          cout << "FastestFinger" << endl;
        } else
          cout << "Ashishhup";
      }
    }
  }
 }
  return 0;
}