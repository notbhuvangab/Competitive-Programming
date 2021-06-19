#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    if(n>0){
    int sum=0,mul=1;
    while(n){
        sum+=(n%10);
        mul*=(n%10);
        n/=10;
    }
    sum==mul?cout<<"true":cout<<"false";
    }
    else{
        cout<<-1;
    }
}