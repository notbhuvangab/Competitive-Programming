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
    int n;
    cin>>n;
    
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else
    {
        if(n%3==0){
            cout<<n/3<<" "<<(n/3)*2<<endl;
        }
        else if(n%5==0){
            cout<<n/5<<" "<<(n/5)*4<<endl;
        }
        else if(n%7==0){
            cout<<n/7<<" "<<(n/7)*6<<endl;
        }
        else{
            cout<<1<<" "<<n-1<<endl;
        }
    }
    
    }

    return 0 ;

}