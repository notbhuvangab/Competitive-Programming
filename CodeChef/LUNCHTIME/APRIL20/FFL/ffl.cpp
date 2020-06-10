#include<iostream>
#include<vector>

 using namespace std;

 int main()
 {
     int t;
     cin>>t;

     while(t--){
        int n,s,d;
        bool flag = false;
        cin>>n>>s;
        vector<int> p(n);
        vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>>p[i];

     for(int i=0; i<n; i++)
        cin>>arr[i];

      d = 100-s;

      for(int i=0;i<n;i++){
        if(arr[i]==1){
            for(int j=0;j<n;j++){
                if(arr[j]==0){
                    if((p[i]+p[j])<=d)
                        flag = true;
                }
            }
        }

      }

      if(flag)
        cout<<"yes";
      else
        cout<<"no";
 }
}
