#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
  
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int getOddOccurrence(vll v, int d) 
{ 
    int res = 0;  
    for (int i = 0; i < d; i++)      
        res = res ^ v[i]; 
      
    return res; 
} 

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
    ll N;
    cin>>N;
    
     vpll v(4*N);

     vll v1;
     vll v2;
     map<int,int> m;
     map<int,int> m2;

     for(int i=0;i<4*N-1;i++){
         cin>>v[i].fr>>v[i].sc;
         v1.pb(v[i].fr);
         v2.pb(v[i].sc);
     }
          
    //  for(int i=0;i<4*N-1;i++){
    //      m[v[i].fr]++;
    //      m2[v[i].sc]++;
    //  }

    //  set<int>::iterator itr;
   
    //  for(itr = st.begin();itr!= st.end();itr++){
    //      if(m[*itr]%2){
    //           v[4*N-1].fr = *itr;
    //           break;
    //              }
    //        }
     
    //  for(itr = st2.begin();itr!=st2.end();itr++){
    //      if(m2[*itr]%2){
    //            v[4*N-1].sc = *itr;
    //            break;
    //      }
    //  }
    // // bool flag = false;
    // //  for(int i=0;i<4*N-1;i++){
    // //       if(v[i]==v[4*N-1]){
    // //           flag = true;
    // //           break;
    // //       }
    // //  }
    // //  if(flag)
    // //    cout<<v[4*N-1].sc<" "<<v[4*N-1].fr;
       
       v[4*N-1].fr = getOddOccurrence(v1,v1.size());
       v[4*N-1].sc = getOddOccurrence(v2,v2.size());
     
     cout<<v[4*N-1].fr<<" "<<v[4*N-1].sc<<endl;
     

    }
    return 0 ;

}