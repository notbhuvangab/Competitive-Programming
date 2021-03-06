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

int solveVector(vll x, vll y) {
  map<int, int> m,m1,m2;
  int cnt = 0;
  for (int i = 0; i < x.size(); i++) {
    m[x[i]]++;m1[x[i]]++;
    m[y[i]]++;m2[y[i]]++;
  }
  map<int, int>::iterator itr;
  bool flag = true;
  for (itr = m.begin(); itr != m.end(); itr++) {
    if (itr->second % 2) {
      flag = false;
      break;
    }
  }
  sort(x.begin(), x.end());
  sort(y.begin(),y.end());
  if (x==y)
     return 0;
  if (flag == false) {
    return -1;
  } else {
    for (int i = 0; i < x.size() - 1; i++) {
      if (x[i] == x[i + 1]) {
        cnt++;
        i++;
      }
    }
  }
  return cnt;
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

    int n;
    cin >> n;

    int cnt = 0;

    vll A(n), B(n);

    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> B[i];
    }
    if (n == 1) {
      if (A[0] == B[0])
        cout << 0 << endl;
      else
        cout << -1 << endl;
    } else {
      cout << solveVector(A, B)<<endl;
    }

    //     sort(A.begin(),A.end());
    //     sort(B.begin(),B.end());

    //     if(A==B){
    //         cout<<0<<endl;
    //     }
    //     else {

    //     }
    // }
  }

  return 0;
}