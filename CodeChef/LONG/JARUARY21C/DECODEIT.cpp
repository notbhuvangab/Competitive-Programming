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

        string s;
        cin>>s;

        map<string,char> enmap;
        enmap["0000"] = 'a';
        enmap["0001"] = 'b';
        enmap["0010"] = 'c';
        enmap["0011"] = 'd';
        enmap["0100"] = 'e';
        enmap["0101"] = 'f';
        enmap["0110"] = 'g';
        enmap["0111"] = 'h';
        enmap["1000"] = 'i';
        enmap["1001"] = 'j';
        enmap["1010"] = 'k';
        enmap["1011"] = 'l';
        enmap["1100"] = 'm';
        enmap["1101"] = 'n';
        enmap["1110"] = 'o';
        enmap["1111"] = 'p';

        for(int i=0;i<n-1;i+=4)
            cout<<enmap[s.substr(i,4)];
        cout<<endl;
	}
    return 0;
}