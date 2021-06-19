#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        long long sq = sqrt(i);

        if((n%i==0)&&(sq*sq==i))
            cnt++;
    }
    cout<<cnt;
}