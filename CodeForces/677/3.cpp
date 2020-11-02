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

int nOfDigits(int x){
    int cnt = 0;
    while(x){
        cnt++;
        x/=10;
    }
    return cnt;
}

bool areSame(int a[],int n) 
{ 
    unordered_map<int,int> m;//hash map to store the frequency od every 
                             //element 
    for(int i=0;i<n;i++) 
       m[a[i]]++; 
       
    if(m.size()==1) 
       return true; 
    else 
       return false; 
} 
int largest(int arr[], int n) 
{ 
    int i,j; 
    int max = arr[0]; 
    for (i = 1; i < n-1; i++) 
        if (arr[i] > max) {
            max = arr[i];
            j = i;
        } 
    
    return j; 
}
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

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(areSame(arr,n))
            cout<<-1<<endl;
        else{
            cout<<largest(arr,n) + 1<<endl;
        }
	}
    return 0;
}