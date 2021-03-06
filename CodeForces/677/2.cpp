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

        vll vec(n);

        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        int lb,ub;

        for(int i=0;i<n;i++){
            if(vec[i]==1){
                lb = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(vec[i]==1){
                ub = i;
                break;
            }
        }
        int cnt = 0;
        for(int i=lb;i<=ub;i++)
            if(vec[i]==0)
                cnt++;

        cout<<cnt<<endl;
	}
    return 0;
}