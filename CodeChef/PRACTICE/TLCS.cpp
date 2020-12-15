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

// void LCW(string x,string y){
    // int LCW[n+1][m+1];

    // for(int i=0;i<=n;i++)
    //     LCW[i][m] = 0;
    // for(int i=0;i<=m;i++)
    //     LCW[n][i] = 0;
    
    // int maxLCW = 0,a,b;

    // for(int i=m-1;i>=0;i--){
    //     for(int j=n-1;j>=0;j--){
    //         if(y[i] == x[j])    
    //             LCW[i][j] = 1 + LCW[i+1][j+1];
    //         else
    //             LCW[i][j] = 0;

    //         if(LCW[i][j] > maxLCW){
    //             maxLCW = LCW[i][j];
    //             a = i;
    //             b = j;
    //         }
    //     }
    // }
    
    // if(maxLCW == 1)
    //     cout<<"case "<<t<<" "<<"N\n";
    // else{
    // cout<<"case "<<t<<" "<<"Y\n";
    // cout<<maxLCW<<endl;
    // while(maxLCW--){
    //     cout<<y[a]<<" "<<a<<" "<<b<<endl;
    //     a++;b++;
    // }
    // }


// }

int32_t main() {

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

	int t;
	cin >> t;
    int tt = 1;
    while(t--){
        ll n,m;
        string x,y;
        cin>>n>>x>>m>>y;
        
    int LCW[n+1][m+1];

    for(int i=0;i<=n;i++)
        LCW[i][m] = 0;
    for(int i=0;i<=m;i++)
        LCW[n][i] = 0;
    
    int maxLCW = 0,a,b;
    int r=0,c=0;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(y[j] == x[i])    
                LCW[i][j] = 1 + LCW[i+1][j+1];
            else
                LCW[i][j] = 0;
            
            if(LCW[i][j] > maxLCW){
                maxLCW = LCW[i][j];
                a = m-1-j;
                b = n-1-i;
            }
        }
    }
    
    if(maxLCW == 1)
        cout<<"case "<<tt<<" "<<"N\n";
    else{
        cout<<"case "<<tt<<" "<<"Y\n";
        cout<<maxLCW<<endl;
        while(maxLCW--){
            cout<<y[a]<<" "<<a<<" "<<b<<endl;
            a++;b++;
        }
    }
    tt++;
	}
    return 0;
}