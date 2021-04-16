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
#define fastAsFk_boi()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

int getValue(ll e){
	        if(e==1) return 20;
		    if(e==2) return 36;
		    if(e==3) return 51;
		    return 60;
	}

int32_t main() {

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

	int t;
	cin >> t;

    while(t--){
		    ll n;
            cin>>n;
		    
		    ll e =  n%4;
		    ll f = (ll)ceil(((double)n)/4.0);
		    long sum = 44*(f-1);
		    long e1 = f==1 ? 0:e;
		    sum = sum+(getValue(e))+((4-e1)%4)*4;
		    cout<<sum<<endl;
		}
    return 0;
}