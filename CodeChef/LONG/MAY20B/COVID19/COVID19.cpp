#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;
int main()
{
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

        int X[n];
        for(int i=0;i<n;i++){
            cin>>X[i];
        }
        int cnt=1;
        vector<int> v;

        for(int i=0;i<n;i++){
            if(X[i+1]-X[i]<=2){
                cnt++;
             }
            else{
                v.push_back(cnt);
                cnt=1;
                continue;
            }
        }
      cout<<*min_element(v.begin(), v.end())<<" "<<*max_element(v.begin(), v.end())<<endl;
    }
}

