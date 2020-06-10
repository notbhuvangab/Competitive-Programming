#include <iostream>
using namespace std;
int main()
{
int i,j,t,n,ar[2],a;
cin>>t;
for(i=0;i<t;i++)
{
ar[0]=0;
ar[1]=0;
cin>>n;
cin>>a;
ar[0]=a;
ar[1]=1;

for(j=1;j<n;j++)
{
cin>>a;
if(a<ar[0])
{
ar[0]=a;
ar[1]=0;
}
if(a==ar[0])
{
ar[1]++;
}

}
if(ar[1]%2)
cout<<"Lucky"<<endl;
else
cout<<"Unlucky"<<endl;
}
return 0;
}
