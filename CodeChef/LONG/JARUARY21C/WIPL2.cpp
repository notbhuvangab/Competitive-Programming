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

int givedadp(vector<int> box,int n,int k){
    int tempsum = 0;

    if(n==1)
        return -1;
    bool dp[n+1][16000];
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<=n;i++){
        dp[i][0] = true;
    }

    for(int i=1;i<=n;i++){
        tempsum+=box[i-1];
        for(int j=1;j<=tempsum;j++){
            if(dp[i-1][j - box[i-1]] == true)
                dp[i][j] = true;
            else 
                dp[i][j] = dp[i-1][j];
        }

        if(tempsum >= 2*k){
            for(int itr=k;itr<=tempsum-k;itr++)
                if(dp[i][itr] == true)
                    return i;
        }
    }
    return -1;
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
        int n,k,sum=0;
        cin>>n>>k;

        vector<int> box(n);
        for(int i=0;i<n;i++){
            cin>>box[i];
            sum+=box[i];
        }

        sort(box.begin(),box.end(),greater<int>());

        if(sum < 2*k)
            cout<<-1<<endl;
        else if(n>2 && box[0]>=k && box[1]>=k){
            cout<<2<<endl;
        }
        else if(n>2 && box[0]>=k && box[1]<k){
            int tempsum = 0,temp;
            bool flag = false;
            for(int i=1;i<n;i++){
                tempsum+=box[i];
                if(tempsum >=k){
                    temp = i+1;
                    flag = true;
                    break;
                }
            }
            if(flag)
                cout<<temp<<endl;
            else 
                cout<<-1<<endl;
        }
        else{
            cout<<givedadp(box,n,k)<<endl;
        }

	}

    return 0;
}