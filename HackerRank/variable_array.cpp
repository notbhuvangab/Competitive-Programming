#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int n,q;

    cin>>n>>q;
    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        for(int j=0;j<s;j++){
            int k;
            v[i].push_back(k);
        }
    }


    // for(int i=0;i<q;i++){
    //     int q1,q2;
    //     cin>>q1>>q2;
    //     cout<<v[q1][q2]<<endl;
    // }
    return 0;
}