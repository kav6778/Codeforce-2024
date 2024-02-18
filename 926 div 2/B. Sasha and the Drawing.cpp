// https://codeforces.com/contest/1929/problem/B
//Q.The minimum number of cells that need to be colored so that
//  there is at least k diagonals which have at least one colored cell
//O(1)

#include <iostream>
using namespace std;

#define endl '\n'

void solve() {
    int n, k; 
    cin >> n >> k;

    if (k == ((4 * n) - 2)) {
        cout << n + n << endl;
    } else if (k < ((4 * n) - 2) && k % 2 != 0) {
        cout << (k + 1) / 2 << endl;
    } else if (k < ((4 * n) - 2) && k % 2 == 0) {
        cout << k / 2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t; 
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
