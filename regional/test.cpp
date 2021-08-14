#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl '\n'
#define int long long int
#define mod 1000000007
#define vi vector<int>
#define pb push_back
#define vvi vector<vector<int>>
#define f(x,l,r) for(int x=l;x<r;x++)
#define ii pair<int,int>
#define vii vector<ii>
#define INF 1000000000
#define ld long double 
#define flash ios::sync_with_stdio(false);cin.tie(0);
//POLICY BASED DATA STRUCTURE BELOW 
template<class T> using oset =tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

void fun()
{
    int n;cin>>n;
    n=2*n;
    double a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    double x=(a[0]+a[n-1])/2;
    int f=0;
    for(int i=1;i<n/2;i++){
        if((a[i]+a[n-i-1])/2!=x){
            f=1;
            break;
        }
    }
    if(f==1)cout<<"IMBALANCED\n";
    else cout<<"PERFECT\n";

}
main()
{
    //INITIALIZE ONLY WHAT YOU NEED 
    flash
 //   sieve();
    int t=1;
    cin>>t;
//    oset<int> s;
    while(t--) {
      fun();
    }
}