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

    ll t;
    cin>>t;
    while(t--){
	ll n,x;
    cin>>n>>x;
    
    if(n<=x){
        cout<<1<<endl;
    }
    else if((n&1)&&(x==0))
        cout<<-1<<endl;
    else if(!(n&1) && (x==0)){
        int cnt = 0;
        while(n){
            int l = log2(n);
            if(l%2){
                cnt++;
                n -= pow(2,l);
            }
            else{
                cnt++;
                n -= pow(2,l-1);
            }
        }
        cout<<cnt<<endl;
    }
    else{
        int temp = n,cnt=0;
        while(temp>x){
            int l = log2(temp);
            if(l%2){
                cnt++;
                temp -= pow(2,l);
            }
            else{
                cnt++;
                temp -= pow(2,l-1);
            }
        }
        temp==0?cout<<cnt:cout<<cnt+1;
        cout<<endl;
    }
    }
    return 0;
}