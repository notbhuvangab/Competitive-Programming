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
    int n,k;
    cin>>n>>k;

    vll q(n);

    for(int i=0;i<n;i++)
      cin>>q[i];

		if(n==1){
			if(q[0]>k)
				cout<<q[0]/k + 1<<"\n";
			else if(q[0]==k)
				cout<<2<<"\n";
			else
				cout<<1<<"\n";
		}
		else{
		bool flag = false;
		int res;
		for(int i=0;i<n-1;i++){
			if(q[i]>k)
				q[i+1]+=q[i] - k;
			else{
				flag = true;
				res = i+2;
				break;
			}
		}

		if(flag)
			cout<<res<<"\n";
		else
			cout<<n+q[n-1]/k<<"\n";
		}
	}
  return 0;
}