#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
  #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

ll t;
cin>>t;
 while(t--){

     int n,sum=0,i=0;
     cin>>n;

    do{
        i++;
        sum+= n/(pow(5,i));
    }while(pow(5,i)<=n);
 
   cout<<sum<<endl;
 }

}