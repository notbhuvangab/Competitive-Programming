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

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string row;
        cin >> row;

        ll cnt = 0;
        for (int i = 0; i < row.length(); i++)
        {
            if (row[i] == 'x')
            {
                if (row[i + 1] == 'y')
                { //||row[i-1]=='y'){
                    cnt++;
                    i += 1;
                }
            }
            else if (row[i] == 'y')
            {
                if (row[i + 1] == 'x')
                { //||row[i-1]=='x'){
                    cnt++;
                    i += 1;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}