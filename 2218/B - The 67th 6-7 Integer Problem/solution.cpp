#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[7], total = 0, mx = -1e9;
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            total += a[i];
            mx = max(mx, a[i]);
        }
        cout << -total + 2 * mx << "
";
    }
    return 0;
}