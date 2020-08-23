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

bool checkColl(pair<ll, ll> p, vll v) {
  
  vll::iterator itr;
  for (itr=v.begin(); itr!=v.end(); itr++) 
    if (*itr == p.fr + p.sc) 
      return true;
  return false;
}

int checkCount(pair<ll, ll> p, vll v) {
  int count = 0;
  for (int i = 0; i < v.size(); i++) {
    if (p.fr + p.sc > v[i])
      count++;
    else
      break;
  }
  return count;
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

    vll line(n);

    for (int i = 0; i < n; i++) {
      cin >> line[n];
    }

    int q;
    cin >> q;

    vpll points(q);

    for (int i = 0; i < q; i++) {
      cin >> points[i].first >> points[i].second;
    }

    for (int i = 0; i < q; i++) {

      //      int count = 0;

      if (points[i].fr == 0 && points[i].sc == 0) {
        cout << 0 << endl;
      } else {
        //        for(int i=0;i<n;i++){
        //           if(points[i].fr+points[i].sc==line[i]){
        //             cout<<-1<<endl;
        //             break;
        //           }
        //           else{
        //             if(points[i].fr + points[i].sc > line[i])
        //                 count++;
        //           }
        //        }
        //        cout<<count<<endl;
        if (checkColl(points[i], line)) {
          cout << -1 << endl;
        } else
          cout << checkCount(points[i], line) << endl;
      }
    }
  }

  return 0;
}