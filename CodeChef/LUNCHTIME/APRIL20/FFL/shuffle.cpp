#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> vect, int n,int k)
{
   int i, j;
   for (i = 0; i < n-1; i++)
   {

     for (j = 0; j < n-i-1; j++)
     {
        if (vect[j] > vect[j+k])
        {
           swap(&vect[j],&vect[j+k]);
        }
     }
   }
}


int main()
{
    int t;
    cin>>t;


while(t--){
    int n,k;
    vector<int> A(n);


    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    B=A;

  sort(A.begin(),A.end());
  bubbleSort(A,n,k);

  for(int i=0;i<n;i++)
    cout<<B[i];
    cout<<endl;
  /*for(int i=0;i<n;i++)
    cout<<A[i];*/


  /*if((A==B)||k==1)
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;*/

}
}
