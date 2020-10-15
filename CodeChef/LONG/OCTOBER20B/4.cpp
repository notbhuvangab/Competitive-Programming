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

int findIndex(vector<ll> v, int n, int p, int x) {
  int min = MAX_INT, pos_x;
  for (int i = 0; i < n; i++) {
    if (v[i] == x) {
      if (abs(p - i) < min) {
        min = abs(p - i);
        pos_x = i;
      }
    }
  }
  return pos_x;
}

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

    vll arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int index = findIndex(arr, n, p, x);
    int cnt = 0;

    if (arr[index] != x) {
      arr[k - 1] = x;
      sort(arr.begin(), arr.end());
      cnt++;
    }

    if (arr[p - 1] == x) {
      cout << cnt << endl;
      continue;
    }

    if ((p < k && arr[p - 1] < x) || (p > k && arr[p - 1] > x)) {
      cout << -1 << endl;
      continue;
    }

    index = findIndex(arr, n, p, x) + 1;
    cout << abs(p - index) + cnt << endl;
  }
  return 0;
}