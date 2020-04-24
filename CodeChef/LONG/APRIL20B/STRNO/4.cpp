#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}*/
int main()
{
int t;
cin>>t;
ll x,k;
cin>>x>>k;
while(t--)
{
   if(x==2&&k==1) {
    cout<<"1";
   }
   else if(x>(k+1))
   {
      cout<<"1";
   }
   else
   {
       cout<<"0";
   }
}

}
