#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;                                // Test Cases

    for(int i=0; i<t; i++)
   {
       int N;
       int flag;
         int ind,cnt=0;;

       cin>>N;                     //Entering the number

       int *A = new int[N];
       for(int j=0; j<N; j++)
       {
          cin>>A[j];                    //Entering the queue
       }

       for(int j=0; j<N; j++){
         if(A[j]==1)
            cnt++;
       }

       for(int j=0; j<N ; j++)
           {
            if(A[j]==1){
                ind = j;
                  break;
            }
           }

       if(N<7)
        {
            if(cnt==1)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            for(int j=ind;j<N;j++){
                if(A[j]==1){
                    if((j-ind>=6)||(j-ind==0)){
                        ind = j;
                        flag = 1;
                        continue;
                    }
                    else {
                           flag = 0;
                        }
                }
            }

         if(flag == 1)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
        }
   }
   return 0;
}
