
#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
const int maxn = 10000 + 5;
double n;
double l, w;


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