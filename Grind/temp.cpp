#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int  long long int
#define mod 1000000007
#define vi vector<int>
#define pb push_back
#define vvi vector<vector<int>>
#define f(x,l,r) for(int x=l;x<r;x++)
#define ii pair<int,int>
#define vii vector<ii>
#define INF 1000000000

void fun()
{
    int n,x;
    cin>>n>>x;
   int c=0;
   int te;
   if(n<=x)cout<<1<<endl;
   else if(n&1&&x==0)cout<<-1<<endl;
   else {
       while (n > x) {
           te = log2(n);
           if (te & 1) c += 1;
           else c += 2;
           n -= (pow(2, te));
       }
       if(n>0&&n<=x){c++;
       cout << c << endl;}
       else cout<<-1<<endl;
   }
}
main()
{
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t=1;
    cin>>t;
    while(t--) {
        fun();
    }
}