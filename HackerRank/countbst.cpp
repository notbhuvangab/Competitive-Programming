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

int numberOfBST(int n) 
{ 
    int dp[n + 1]; 
    memset(dp,0,sizeof(dp)); 

    dp[0] = 1; 
    dp[1] = 1; 
    int fdp=0;
    for (int i = 2; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            dp[i] = dp[i] + (dp[i - j] * dp[j - 1]);
        } 
        fdp +=dp[i];
    } 
  
    return dp[n]; 
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
        int n;
        cin>>n;

        cout<<numberOfBST(n);
	}
    return 0;
}