#include <iostream>
#include <vector>
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

int nor(ll i,vll arr){
    int cnt = 0;
   for(int j=0; j<arr.size();j++)
     if(arr[i]<=arr[j])
       cnt++;
    return cnt;   
}
void solve(){
    ll n;
    scanf("%lld",&n);

    vll budget(n);

    for(int i=0;i<n;i++) 
        scanf("%lld",&budget[i]);

    ll max;
    max = budget[0] * nor(0,budget);
   for(int i = 1; i<n;i++){
       if(budget[i]*nor(i,budget)>max)
          max = budget[i]*nor(i,budget);
    }
    printf("%d \n",max);
}

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    solve();

    return 0 ;

}