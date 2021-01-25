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
#define alla(a, n) a, a + n
#define fastAsFk_boi()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

// int manipulated_seive(int N) 
// {   
//     vector<long long >isprime(1000001 , true); 
//     vector<long long >prime; 
//     vector<long long >SPF(1000001); 

//     isprime[0] = isprime[1] = false ; 
//     for (long long int i=2; i<N ; i++) 
//     { 
//         if (isprime[i]) 
//         {
//             prime.push_back(i); 
//             SPF[i] = i; 
//         } 
//         for (long long int j=0; 
//              j < (int)prime.size() && 
//              i*prime[j] < N && prime[j] <= SPF[i]; 
//              j++) 
//         { 
//             isprime[i*prime[j]]=false; 

//             SPF[i*prime[j]] = prime[j] ; 
//         } 
//     }
//     int cnt =2;

//     for(int i=13;i<=N;i+=2) 
//         if(isprime[i] && isprime[i-2])
//             cnt++;

//     return cnt;


// } 

int32_t main() {

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

	int t;
	cin >> t;

    while(t--){
        int n;
        cin>>n;
        
        if(n<5)
            cout<<0<<endl;
        else if (n<7)
            cout<<1<<endl;
        else if (n<13)
            cout<<2<<endl;
        else{
            int cnt = 2;
            for(int i=13;i<=n;i+=2){
                if((i%3) && (i%5) && (i%7) ){
                    if(((i-2)%3) && ((i-2)%5) && ((i-2)%7)){
                        cnt++;
                    }
                }
            // cout<<manipulated_seive(n);
        }
        cout<<cnt<<endl;
	}
    }
    return 0;
}