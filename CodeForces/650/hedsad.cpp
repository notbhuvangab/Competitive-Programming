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
    string b;
    cin >> b;
    vector<char> a;

     if(b.length() == 2){
         cout<<b<<endl;
     }
     else{
    a.push_back(b[0]);
    for (int i = 1; i < b.length() - 1; i +=1 ) {
      a.push_back(b[i]);
      if(b[i] = b[i+1])
         i++;     
    }
    a.push_back(b[b.length()-1]);

    for (int i = 0; i < a.size(); i++) {
      cout << a[i];
    }
    cout << endl;
    
  }
 }
}