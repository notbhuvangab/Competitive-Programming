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
    int N, X;

    cin >> N >> X;

    int arr[N];
    int minDays = 0;

    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N; i++) {
      if (X >= arr[i]) {
        minDays++;
        X = max(X, 2 * arr[i]);
        continue;
      }
      int curr = arr[i];

      while (curr > 0) {
        minDays++;
        curr = min(curr, 2 * (curr - X));
        X *= 2;
      }
      X = 2 * arr[i];
    }
    cout << minDays << endl;
  }

  return 0;
}