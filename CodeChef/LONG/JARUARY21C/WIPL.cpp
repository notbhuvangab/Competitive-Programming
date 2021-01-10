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
        int n,k,sum=0;
        cin>>n>>k;

        vector<int> box(n);
        for(int i=0;i<n;i++){
            cin>>box[i];
            sum+=box[i];
        }
        sort(box.begin(),box.end(),greater<int>());
        
        if(sum < 2*k || n==1){
            cout<<-1<<endl;
        }
        // else if(sum == 2*k){

        // }
        else{
            int sum1=0,sum2=0,cnt1=0,cnt2=0;
            bool flag1 = true,flag2 = true;
            for(int i=0;i<box.size();i++){
                if(sum1<k && sum2<k){
                    if(i%2){
                    if(sum2<k){
                        // jump1:
                        sum2+=box[i];
                        cnt2++;
                    }
                    if(sum2<k && i>=box.size()-2)
                        flag2 = false;
                    // if(sum2>=k && sum1<k)
                    //     goto jump2;
                }
                else{
                    if(sum1<k){
                        // jump2:
                        sum1+=box[i];
                        cnt1++;
                    }
                    if(sum1<k && i>=box.size()-2)
                        flag1 = false;
                    // if(sum1>=k && sum2<k)
                    //     goto jump1;
                }
            }
            else if(sum1<k && sum2>=k){
                sum1+=box[i];
                    cnt1++;
                if(sum1<k &&i==box.size()-1)
                        flag1 = false;
            }
            else if(sum2<k && sum1>=k){
                sum2+=box[i];
                    cnt2++;
                if(sum2<k && i==box.size()-1)
                        flag2 = false;
            }
            else 
                break;
        }
            if(flag1 && flag2)
            cout<<cnt1+cnt2<<endl;
            else 
            cout<<-1<<endl;
        }

	}
    return 0;
}