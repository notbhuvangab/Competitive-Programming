#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t;
    cin>>t;

    while(t--){
        ll a,b,x,y,n;

        cin>>a>>b>>x>>y>>n;

        if ((a-x+b-y) <= n) {
            cout<<x*y<<endl;
        }
        // else if((n<(a-x)) && (n < (b-y))) 
        //     cout<<min((a-n)*b,a*(b-n))<<endl;
        else{
            cout<<min((a-min(n,a-x))*(b-((n-a+x)>0?n-a+x:0)),(b-min(n,b-y))*(a-min(a-x,(n-b+y)>0?n-b+y:0)))<<endl;
        }
        
        }
    }

