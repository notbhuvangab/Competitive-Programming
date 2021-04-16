#include<bits/stdc++.h>
#define fastAsFk_boi()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

    int t;
    cin>>t;

    while(t--){
    int n,k;
    cin>>n>>k;

    string str1,str2(k,'*');

    cin>>str1;

    if (str1.find(str2) != string::npos) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }
}