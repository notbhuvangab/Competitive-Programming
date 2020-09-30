#include<bits/stdc++.h>
using namespace std;


int main() { 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int n;

    cin>>n;
     int a , b;
     a=b=n;

    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
             if(i<=n && j<=i)
               cout<<j;
             if(i>n && j<= 2*n - i)
               cout<<j;

               
        }
        cout<<endl;
    }

    return 0;
}