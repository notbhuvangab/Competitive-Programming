#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int fr[3]={0};
    do{
        if(n%10 == 0)
            fr[0]++;
        else if((n%10)&1)
            fr[1]++;
        else 
            fr[2]++; 
    }while(n/=10);

    cout<<"Zero: "<<fr[0]<<endl<<"Even: "<<fr[2]<<endl<<"Odd: "<<fr[1]<<endl;
}