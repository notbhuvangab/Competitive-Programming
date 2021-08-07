#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,n,c=2;
    cin>>n>>x;
    if(x!=n)
    {
    if((n%2)&&x==0)
           cout<<"-1";
    else
    {
    int t=log2(n);
    n=n-(pow(2,t));
//    cout<<n<<endl;
    while(n>x)
    {
        t=log2(t);
        n=n-pow(2,t);
        if(t%2==0)
        {
          c+=2;
        }
        else
        { 
          c++;
        }
    }
    cout<<c;
    } 
    }
    else if(n<=x)
        cout<<"1";
}