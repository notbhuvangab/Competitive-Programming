#include<iostream>
 using namespace std;

 void revNumber(int x){
 int r,s=0,v;
 while(x){
 r = x%10;
 s = (s*10) + r;
 x/=10;
 }
 cout<<s<<endl;
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--){
    int x;
    cin>>x;
   revNumber(x);
    }
 }
