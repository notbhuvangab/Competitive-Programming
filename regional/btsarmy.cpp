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
        int n,q;
        cin>>n>>q;

        vector<int> u(n),t(n);

        for(int i=0;i<n;i++)
            cin>>u[i];
        for(int i=0;i<n;i++)
            cin>>t[i];

        vector<int> d(n);

        for(int i=0;i<n;i++)
            d[i] = u[i]+t[i];

        int max = INT_MIN,it;
        for(int i=0;i<n;i++)
            if(d[i]>max){
                max = d[i];
                it = i;
            }

        while(1){
            if(d.front() < 1){
                u.erase(u.begin());
                t.erase(t.begin());
            }
            if(d.back() < 1){
                u.erase(u.begin() + u.size() - 1);
                t.erase(t.begin() + u.size() - 1);
            }

        }
        
        }
    return 0;
}