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
    int n;cin>>n;
    int x=0,c=0;
    int a[n],f=0;
    vector<int> v;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==1)v.push_back(1);
        else {
            if(f==0)f=a[i];
            for(int i=2;i<=a[i];i++){
                if(a[i]%i==0){
                    f=i;
                    break;
                }
            }
            if(__gcd(x,a[i])==1){
                c+=f;
            }
        }
    }
    cout<<c+(v.size()*f)<<endl;



    }
    return 0;
}