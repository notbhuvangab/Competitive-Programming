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

int32_t main() {

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

	int t;
	cin >> t;

    while(t--){
        int n;
        cin>>n;

        vector<int> w(n);
        vector<int> l(n);

        for(int i=0;i<n;i++)
            cin>>w[i];

        for(int i=0;i<n;i++)
            cin>>l[i];

        if(is_sorted(w.begin(),w.end())){
            cout<<0<<endl;
            return 0;
        }

        if(n==2){
                cout<<1<<endl;
            return 0;
        }

        if(n==3){
            int cnt =0,k1,k2,k3;
            for(int i=0;i<3;i++)
                if(w[i]
        }
        
	}
    return 0;
}