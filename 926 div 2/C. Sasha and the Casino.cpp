//https://codeforces.com/contest/1929/problem/C

#include <iostream>
using namespace std;

#define endl '\n'
#define ll long long

ll next_bet(ll cur_loss, ll k) {
    return (cur_loss + k - 1) / (k - 1);
}

void solve() {
    ll k, x, a;
    cin >> k >> x >> a;

    ll u = 0;
    int ok = 1;

    for (int i = 0; ok && i < x; i++) {
        ll v = next_bet(u, k);
        u += (v == 0) ? 1 : v;
        ok = u <= a;
    }
    cout << ((k * (a - u) > a) ? "YES" : "NO") << endl;
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
