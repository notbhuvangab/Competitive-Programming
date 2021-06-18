#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int num = n,chk=num%10;
    num/=10;
    while(num){
        if(chk<(num%10))
            chk = num%10;

        num/=10;
    }

    cout<<chk;
}