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
        ll n,k,x,y;
        cin>>n>>k>>x>>y;

        ll i,j;

        if(x==y)
            cout<<n<<" "<<n<<endl;
        else{   
            while(x<n && y<n){
                x++;
                y++;
            }

            map<ll,pll> find;
            find[1] = mp(x,y);
            find[2] = mp(y,x);
            x>y?find[3]=mp(0,x-y):find[3]=mp(y-x,0);
            x>y?find[0]=mp(x-y,0):find[0]=mp(0,y-x);

            cout<<find[k%4].first<<" "<<find[k%4].second<<endl;
            
        //     while(k){
        //         if (y <= 0 || y >= n) {
        //             y = -y;
        //             k--;
        //         }
        //         if (x <= 0 || x >= n) {
        //             x = -x;
        //             k--;
        //         }     

        //         x++;
        //         y++;
        //     }
        // cout<<x<<" "<<y<<endl;
    

	}

    }
    return 0;
}