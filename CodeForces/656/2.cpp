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

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

void remove(std::vector<int> &v)
{
	auto end = v.end();
	for (auto it = v.begin(); it != end; ++it) {
		end = std::remove(it + 1, end, *it);
	}

	v.erase(end, v.end());
}

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
     int n;
     cin>>n;
     vector<int> v(2*n);
     unordered_set<int> s;
     for(int i=0;i<2*n;i++){
         cin>>v[i];
         s.insert(v[i]);
     }
    
     remove(v);
     unordered_set<int>::iterator itr;
    //  for (itr=s.begin();itr!=s.end();itr++)
    //  { 
    //    cout<<*itr<<" "; 
    //  }
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     
  }

  return 0;
}