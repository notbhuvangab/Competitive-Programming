
#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
const int maxn = 10000 + 5;
double n;
double l, w;
struct nodes {
    double l, r;
}node[maxn];
 
bool cmp(nodes a, nodes b) {
    return a.l < b.l;
}
 
int main() {
    ios::sync_with_stdio(false);
    while(cin >> n >> l >> w) {
        int cnt = 0;
        double o, r;
        for(int i = 0; i < n; i++) {
            cin >> o >> r;
            if(r * 2 < w) continue;
            else {
                double t = sqrt( r * r - (w / 2) * (w / 2) );
                node[cnt].l = o - t;
                node[cnt++].r = o + t;
            }
        }
        sort(node, node + cnt, cmp);
        if(node[0].l > 0) {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        double tmp = 0, ln = 0;
        while(ln < l) {
            tmp = ln;
            for(int i = 0; i < cnt; i++)
                if(node[i].l <= ln && node[i].r > tmp)
                    tmp = node[i].r;
            if(tmp == ln) {
                ans = -1;
                break;
            }
            ln = tmp;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}