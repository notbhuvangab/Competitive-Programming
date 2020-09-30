#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main(){

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    int t;
    cin>>t;

 while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = count(s.begin(),s.end(),'1');

        cnt <= 0 ? cout<<0<<endl:cout<< (cnt * (cnt + 1)/2 )<<endl;
  }


    return 0;
}