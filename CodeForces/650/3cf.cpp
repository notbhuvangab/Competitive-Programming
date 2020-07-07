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
      ll n,k;
      cin>>n>>k;
      
      string s;
      cin>>s;
       ll init,cnt = 0;
      if(n<=2)
         cout<<1<<endl;
      else {
         for(int i=0;i<s.length();i++){
             if(s[i]=='1')
                 init = i;
         }
      for(int i=init+1;i<s.length();i++){
          if(s[i]=='1'){
                  if(i - init > 2*k){
                      cnt+= (i-init-1)/2;
                  }
              }
          }
          cout<<cnt<<endl;
      }
        
    }
  }
  
