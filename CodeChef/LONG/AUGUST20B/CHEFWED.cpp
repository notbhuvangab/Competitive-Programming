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

bool checkFamily(vll a, ll b) {
  sort(a.begin(), a.end());
  return binary_search(a.begin(), a.end(), b);
}

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  struct value {
    int val = 0;
  };
  int t;
  cin >> t;

  while (t--) {

    ll n, k;
    cin >> n >> k;

    vll v(n);

    // for (int i = 0; i < n; i++) {
    //   cin >> v[i];
    // }

    // map<int, value> m;
    // for (int i = 0; i < n; i++) {
    //   m[v[i]].val++;
    // }

    // map<int, value>::iterator itr;
     int max = 0;
    vll d;
    for (int i = 0; i < n; i++) {
      if (checkFamily(d, v[i])) {
        d.clear();
        max += 1;
        d.pb(v[i]);
      } else {
        if (d.empty()) {
          max += 1;
          d.pb(v[i]);
        } else {
          d.pb(v[i]);
        }
      }
    }

    cout << max << endl;
  }

  return 0;
}