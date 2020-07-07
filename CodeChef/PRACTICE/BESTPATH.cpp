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

bool isPrime(ll x) {
  int cnt = 0;
  for (ll i = 1; i <= sqrt(x); i++) {
    if (x % i == 0) {
      cnt++;
      if (cnt > 2)
        break;
    }
  }
  if (cnt == 1)
    return true;
  else
    return false;
}

vll check(int arr[3][3]) {
  int org[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vll v;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] != org[i][j])
        v.push_back(arr[i][j]);
    }
  }
  return v;
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
        int n,m;
        cin>>n,m;
    
    for(int i=0;i<m;i++){
        
    }
  }

  return 0;
}