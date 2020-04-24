#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void func()
{
    ll n,cnt=0;
    cin>>n;
    string s,u;
    cin>>s;
    cin>>u;

    for(int i=0;i<n;i++)
     {
         if(u[i]=='N')
            continue;
         else if(u[i]==s[i])
            cnt++;
         else i++;
     }
  cout<<cnt;
}

int main()
{
    int t;
    cin>>t;
    while (t--){
        func();
    }
return 0;
}
