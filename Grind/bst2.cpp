#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector<pair<int,int>> vll;
    
    for(int i=0;i<5;i++)
        vll.push_back(make_pair(i,i+1));

    for(int i=0;i<5;i++)
        cout<<vll[i].first<<" "<<vll[i].second<<endl;

}