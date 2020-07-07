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

int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    ll rem;

    vll a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    bool flag = true;

    map<int, int> coins;
    coins[5] = 0;
    coins[10] = 0;
    coins[15] = 0;

    for (int i = 0; i < n; i++)
    {
      if (flag)
      {
        rem = a[i] - 5;
        if (rem == 10)
        {
          if (coins[rem] > 0)
          {
            coins[rem]--;
            coins[a[i]]++;
          }
          else if (coins[rem / 2] > 1)
          {
            coins[rem/2] -= 2;
            coins[a[i]]++;
          }
          else
            flag = false;
            continue;
        }
        if (rem == 5)
        {
          if (coins[rem] > 0)
          {
            coins[rem]--;
            coins[a[i]]++;
          }
          else
            flag = false;
        }
        if (rem == 0)
          coins[a[i]]++;
      }
    }

    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}


