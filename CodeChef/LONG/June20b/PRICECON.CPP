#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

typedef long long ll;

int_fast32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> Price(n);

        for (int i = 0; i < n; i++)
            cin >> Price[i];

        ll rsum = 0;
        for (int i = 0; i < n; i++)
        {
            if (Price[i] > k)
                rsum += (Price[i] - k);
        }
        cout << rsum << endl;
    }
}
