//https://codeforces.com/contest/1933/problem/C

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

// Function to calculate power
ll power(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ans *= a;
        }
        a *= a;
        b /= 2;
    }
    return ans;
}

// Function to solve the problem
void solve(){
    ll a, b, l;
    cin >> a >> b >> l;

    set<ll> s;

    // Loop to iterate through all possible powers of a
    for (ll x = 0;; x++) {
        ll c_a = power(a, x);
        if (c_a > l)
            break;
        
        // Loop to iterate through all possible powers of b
        for (ll j = 0;; j++) {
            ll temp = c_a * power(b, j);
            if (temp > l)
                break;
            if (l % temp == 0) {
                s.insert(l / temp);
            }
        }
    }

    ll ans = s.size();
    cout << ans << "\n";
}

// Main function
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

