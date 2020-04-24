#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

while(t--)
{
    int n,m,s=0,p=0,e=0,flag=0,i;

    cin>>n>>m;

    int Arr[m];

    for(i=0;i<m;i++)
    {
        cin>>Arr[i];
    }
    for(i=1;i<=n;i++){
        s+=i;
    }

    for(i=0;i<m;i++){
        e+=Arr[i];
        p++;

        if(p==n)
        {
            p=0;
            if(e!=s)
               flag++;
            e=0 ;
        }
    }

    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
