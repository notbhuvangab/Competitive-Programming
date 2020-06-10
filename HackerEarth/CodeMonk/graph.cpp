#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

ll n,m,a,b;
vector<ll> adj[1001];

cin>>n>>m;

for(int i=0;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
}
 ll q;
 cin>>q;
 while(q--){
     int x,y;
     cin>>x>>y;

     for(int i=1;i<=n;i++){
         if(i==x){
             for(int j=0;j<adj[i].size();j++){
                 if(adj[i][j]==y)
                    cout<<"YES"<<endl;
                  else cout<<"NO"<<endl;;

             }
         }

     }

 }  

}