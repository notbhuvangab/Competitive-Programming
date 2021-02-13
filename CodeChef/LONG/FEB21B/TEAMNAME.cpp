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

// bool findString(string str,vector<string> vstr){ 
//     bool flag = false;
//     for(int i=0;i<vstr.size();i++)
//         if(str == vstr[i])
//             flag = true;
    
//     return flag;
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

        vector<string> arr(n);
        map<string,bool> mstr;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            mstr[arr[i]] = true;
        }

        set<string> set1;
        set<char> set2;
        
        
        for(int i = 0;i<n;i++){
            set1.insert(arr[i].substr(1));
            set2.insert(arr[i][0]);
        }

        if(set1.size()==1 || set2.size()==1 ){
            cout<<0<<endl;
        }
        else{
            int cnt = 0;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    string str1 = arr[i],str2 = arr[j];
                    str1[0] = arr[j][0];
                    str2[0] = arr[i][0];

                    if(mstr[str1] || mstr[str2])
                        continue;
                    else 
                       cnt+=2;
                }
            }

            cout<<cnt<<endl;
        }

	}
    return 0;
}


 // int n;
        // cin>>n;

        // vector<string> arr(n);

        // for(int i=0;i<n;i++)
        //     cin>>arr[i];

        // int cnt = 0;

        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         string str1 = arr[i],str2 = arr[j];
        //         str1[0] = arr[j][0];
        //         str2[0] = arr[i][0];

        //         if(findString(str1,arr) || findString(str2,arr))
        //             continue;
        //         else 
        //             cnt+=2;

        //     }
        // }

        // cout<<cnt<<endl;