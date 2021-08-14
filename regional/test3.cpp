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
int binexp(int a,int b){
    int res=1;
    while(b>0){
        if(b&1){
            res=((res*a)%1000000007);
        }
        a=((a*a)%1000000007);
        b=b>>1;
    }
    return res%1000000007;
}
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

int32_t main() {


    fastAsFk_boi();

    int t;
    cin >> t;

    while(t--){
    int n,q;cin>>n>>q;
    vector<pair<int,int> > v;
    int u[n],t[n],temp[n];
    int f=0,s=0,ref=0;
    for(int i=0;i<n;i++)cin>>u[i];
    for(int i=0;i<n;i++)cin>>t[i];
    for(int i=0;i<n;i++)temp[i]=u[i]+t[i];
    ref=max_element(temp,temp+n)-temp;
   // cout<<"ref = "<<ref<<endl;
    for(int i=0;i<n;i++){
        if(i==ref){
            if(q*t[i]>t[i]){
                s+=(u[i]+(q*t[i]));
            }
            else if (q*t[i]==t[i]) s+=(u[i]+t[i]);
            else s+=u[i];
        }
        else {
            if(u[i]>0)s+=u[i];
        }

    }
    cout<<s<<endl;


    }
    return 0;
}
