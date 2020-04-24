#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int i,sa,sb,cnt=0;
  string s;
  cin>>s;
  cin>>sa>>sb;
  for(char c:s)
  {
      if(c=='.')
        cnt++;
  }

if(cnt%2)
    cout<<"unsafe";
else
    cout<<"safe";
}

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
 }
