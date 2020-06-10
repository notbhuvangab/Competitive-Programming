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
#define alla(a,n) a, a + n
  
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int_fast32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

      int t ;
    cin >> t ;

while( t-- ) {
  ll n,q,count=0;
        cin>>n>>q;
  vll a;
      string s; 
  ll c[q];
  cin>>s;

  sort(s.begin(),s.end());
for(int i=1;i<n;i++){
   if(s[i]==s[i-1])
   count+=1;
    else
    {
      a.push_back(count+1);
      count = 0;
    }
}
a.push_back(count+1);

for(int i=0;i<q;i++){
ll sum=0;
cin>>c[i];
for(int k=0;i<a.size();k++){
   if(a[k]>=c[i])
      sum = sum + a[k] - c[i];
}
cout<<sum<<endl;
   }
}

}

    
