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
        string strkey,strtemp;
        cin>>strkey>>strtemp;

        map<char,int> strmap;

        for(int i=0;i<strkey.length();i++){
            strmap[strkey[i]] = i;
        }

        if(strtemp.length()==1){
            cout<<0<<endl;
            continue;
        }

        int sum = 0;

        for(int i=1;i<strtemp.length();i++){
            sum+=abs(strmap[strtemp[i]] - strmap[strtemp[i-1]]);
        }

        cout<<sum<<endl;
    }
    return 0;
}