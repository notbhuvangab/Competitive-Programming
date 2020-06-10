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
  
const int max_char = 26;

using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() 
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
         
    string s;
    cin>>s;
    vector<int> count1(max_char,0);
    vector<int> count2(max_char,0);

   int n = s.length();

   bool flag = true;
    
    if(n==1)
    flag= true;

    else {
        for(int i=0,j= n-1; i<j; i++,j--){
             
           count1[s[i]-'a']++;

           count2[s[j]-'a']++;
        }
        for(int i = 0; i<max_char;i++)
           if(count1[i]!=count2[i])
               flag =  false;
               
          if(flag)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
    }
}
}