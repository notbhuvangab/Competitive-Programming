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
        ll n;
        cin>>n;

        int arr[n];
        vll vec(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        if(n%2){
            for(int i=0,j=n-1;i<=j;i++,j--){
                if(i == n/2)
                    cout<<arr[i];
                else
                    cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        }
        else
            for(int i=0,j=n-1;i<=j;i++,j--)
                cout<<arr[i]<<" "<<arr[j]<<" ";
        
        cout<<endl;
	}
    return 0;
}