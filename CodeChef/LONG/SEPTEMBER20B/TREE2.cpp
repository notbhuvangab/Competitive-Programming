#include<bits/stdc++.h>

using namespace std;

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
        int n;
        cin>>n;

        vector<int> v(n);

       for(int i=0;i<n;i++){
           cin>>v[i];
       }

       sort(v.begin(),v.end(),greater<int>());


        int cnt=0;

        if(n==1){
            if(v[0]==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
else{
       for(int i=0;i<n-1;i++){
           if(v[i+1]==0)
                break;
           if(v[i]>v[i+1])
                cnt++;
       }  

       if(v[0]==0)
           cout<<0<<endl;
       else
           cout<<cnt+1<<endl; 
        
        }
     }
}