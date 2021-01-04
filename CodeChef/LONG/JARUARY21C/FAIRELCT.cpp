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

int arrSum(vll x){
    int sum = 0;
    for(int i=0;i<x.size();i++)
        sum+=x[i];
    return sum;
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
        int n,m;
        cin>>n>>m;

        vll A(n),B(m);
        int sumA=0,sumB=0;
        
        for(int i=0;i<n;i++){
            cin>>A[i];
            sumA += A[i];
        }
        
        for(int i=0;i<m;i++){
            cin>>B[i];
            sumB += B[i];
        }
        int cnt = 0;
        bool flag;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        if(sumA > sumB){
            cout<<0<<endl;
        }
        else{
            for(int i=0,j=m-1;i<min(m,n);i++,j--){
                swap(A[i],B[j]);
                if(arrSum(A)>arrSum(B)){
                    cnt++;
                    flag = true;
                    break;
                }
                else{
                    cnt++;
                    flag = false;
                }
            }
            if(flag)
                cout<<cnt<<endl;
            else
                cout<<-1<<endl;
        }
    }  
    return 0;
}