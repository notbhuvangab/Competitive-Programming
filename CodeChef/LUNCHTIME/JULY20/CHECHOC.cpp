#include <bits/stdc++.h>

using namespace std;

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    float r = (float)y / 2;

    if (n == 1 && m == 1) {                
      cout << x << endl;                                  /* This is the edge case(1X1 matrix)*/     
    } else {
      if (2 * x <= y) {                               
        cout << n * m * x << endl;                        /*If x is less than half of y, even if we fill x on both adjacent sides, some of both will be less than or equal to y*/
      }                                                     
      else if (x > y) {
        if (n * m % 2)
          cout << ((n * m) / 2 + 1) * y << endl;          // If x is greater than y
        else {
          cout << (y * ((n * m) / 2)) << endl;
        }

      }
       else {
        if (n * m % 2) {
          cout << ((y - x) * ((n * m) / 2)) + (x * ((n * m) / 2 + 1)) << endl;   // if x > y/2 && x <= y
        } else {

          cout << (y * ((n * m) / 2)) << endl;
        }
      }
    }
  }
  return 0;
}