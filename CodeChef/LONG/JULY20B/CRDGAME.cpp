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

int sumofdigits(int x) {
  int sum = 0;
  while (x > 0) {
    sum += (x % 10);
    x /= 10;
  }
  return sum;
}

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
    map<char, int> mr;
    int A[n], B[n];
    mr['A'] = 0;
    mr['B'] = 0;
    for (int i = 0; i < n; i++) {
      cin >> A[i] >> B[i];
    }

    for (int i = 0; i < n; i++) {
      if (sumofdigits(A[i]) > sumofdigits(B[i]))
        mr['A']++;
      else if (sumofdigits(B[i]) > sumofdigits(A[i]))
        mr['B']++;
      else {
        mr['A']++;
        mr['B']++;
      }
    }

    if (mr['A'] > mr['B'])
      cout << 0 <<" "<< mr['A']<< "\n";
    if (mr['B'] > mr['A'])
      cout << 1 << " " <<mr['B']<<"\n";
    if (mr['A'] == mr['B'])
      cout << 2 << " "<<mr['A']<<"\n";
  }

  return 0;
}