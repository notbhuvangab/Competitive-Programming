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

bool isPowerOfTwo(ll x)
    {
        return (x && !(x & (x - 1)));
    }

int32_t main() {

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

	ll t;
	cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        if(n%k==0){
            cout<<n/k<<" "<<k<<endl;
            continue;
        }
        if(k<n/2){
            cout<<n/k+1<<" "<<k/2<<endl;
            continue;
        }
        if(k>n/2){
            cout<<n/k+1<<" "<<n-k<<endl;
        }
	}
    return 0;
}