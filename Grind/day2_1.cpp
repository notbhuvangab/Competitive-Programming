#include<iostream>
#include<math.h>
using namespace std;
int binpow(int a, int b) {
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int num = n,cnt=0;
    while(num){
        num/=10;
        cnt++;
    }
    // cout<<cnt<<endl;
    int sq = n*n;
    // cout<<sq<<endl;
    //  cout<<sq%(binpow(10,cnt))<<endl;
    if(sq%(binpow(10,cnt)) == n)
        cout<<"Yes";
    else 
        cout<<"No";
}