#include<iostream>
using namespace std;

int main()
{
    int arr[99],i=0;
    do{
        cin>>arr[i];
        i++;
      }while(arr[i-1]!=42);
      cin>>arr[i];
      int count = i;
   for(i=0;i<count-1;i++)
     cout<<arr[i]<<endl;
}
