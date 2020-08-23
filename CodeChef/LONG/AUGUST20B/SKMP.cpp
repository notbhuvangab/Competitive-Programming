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
  std::cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    string s, p;

    cin >> s >> p;
    if (s.length() == 1) {
      cout << s << endl;
    } else {
      for (int i = 0; i < p.length(); i++) {
        s.erase(find(s.begin(), s.end(), p[i]));
      }

      sort(s.begin(), s.end());

      vector<string> v;

      int u = upper_bound(s.begin(), s.end(), p[0]) - s.begin();
      string temp1 = s;
      v.pb(temp1.insert(u, p));

      int l = lower_bound(s.begin(), s.end(), p[0]) - s.begin();
      string temp2 = s;
      v.pb(temp2.insert(l, p));
      sort(v.begin(), v.end());

      std::cout << v[0] << endl;
    }
  }
  return 0;
}