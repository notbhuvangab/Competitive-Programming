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

int arrsum(vll v){
    int sum = 0;
    for(int i=0;i<v.size();i++)
     sum+= v[i];
    
    return sum;
    }


int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        ll n,k;
        cin>>n>>k;

        vll a(n),b(n);

      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n;i++){
          cin>>b[i];
      }
       
      sort(a.begin(),a.end());
      sort(b.begin(),b.end(),greater<int>());

     for(int i=0;i<k;i++){
         swap(a[i],b[i]);
     }
      
     cout<<arrsum(a);   

    
    }


    return 0 ;

}