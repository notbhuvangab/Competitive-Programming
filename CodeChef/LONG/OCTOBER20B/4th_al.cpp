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
#define MAX_INT 100000000

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  fastAsFk_boi();

  int t;
  cin >> t;

  while (t--) {
    int n, x, p, k;
    cin >> n >> x >> p >> k;

    ll less_cnt = 0,eq_cnt = 0;

    vll arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[i] < x) less_cnt++;
      else if(arr[i]==x) eq_cnt++;
    }

    if(p<=less_cnt && k<=p)
        cout<<less_cnt - p + 1<<endl;
    else if(less_cnt < p && p <=less_cnt + eq_cnt )
        cout<<0<<endl;
    else if(less_cnt + eq_cnt < p && p<=k)
        cout<<p - less_cnt - eq_cnt<<endl;
    else 
        cout<<-1<<endl;
  }
  return 0;
}