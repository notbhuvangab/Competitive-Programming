
#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    bool flag = true;

    while(n){
        if(n%10 <= 1){
            flag = true;
            n/=10;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"true";
    else
        cout<<"false";
}