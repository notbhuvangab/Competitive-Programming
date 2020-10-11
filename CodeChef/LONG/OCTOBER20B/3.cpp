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
#define fastAsFk_boi()                                                         \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

int powerOfTwo(int n) { return n != 0 && !(n & (n - 1)); }
int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  fastAsFk_boi();

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    if (n == 1) {
      cout << 1 ;
    } else if (n == 3) {
      cout << 1 << " " << 3 << " " << 2 ;
    } else if (n == 5) {
      cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 ;
    } else if (powerOfTwo(n)) {
      cout << -1 ;
    }else {
      cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;
      for (int i = 6; i <= n; i++) {
        if (powerOfTwo(i)) {
          cout << i + 1 << " " << i << " ";
          i += 1;
        } else {
          cout << i << " ";
        }
      }
    }
    cout<<endl;
  }
  return 0;
}