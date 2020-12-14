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
        ll n,k,cnt = 0;
        cin>>n>>k;

        int arr[n];

        if(n%2){
            for(int i=0;i<n;i++){
                if(i%2)
                    arr[i] = -(i+1);
                else{
                    arr[i] = i+1;
                    cnt++;
                }
            }
	    }
        else{
            for(int i=0;i<n;i++){
                if(i%2){
                    arr[i] = i+1;
                    cnt++;
                }
                else
                    arr[i] = -(i+1);
            }
        }
        if(cnt<k){
			for(int i=n-1; i>=0 && cnt<k; i--)
				if(arr[i]<0){
					arr[i]=i+1;
					++cnt;
				}
		}

		else if(cnt>k){
			for(int i=n-1; i>0 && cnt>k; i--)
				if(arr[i]>0){
					arr[i]=-(i+1);
					--cnt;
				}
		}

        for(int i=0; i<n; i++) cout << arr[i] << " ";
		cout << endl;
    }
    return 0;
}