#include<iostream>
#include<vector>
typedef long long ll;

using namespace std;

void solve() {
      ll n;
      cin>>n;
      
    vector<int> race(n);
    for(int i = 0; i<n;i++)
       cin>>race[i];

    int cnt = 1;

    for(int i=1; i<n; i++)
        if(race[i]<=race[i-1])
             cnt++;
        else 
           race[i] = race[i-1];
     cout<<cnt<<endl;
}



int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t;
    cin>>t;
 
 while(t--){
     solve();
 }
} 