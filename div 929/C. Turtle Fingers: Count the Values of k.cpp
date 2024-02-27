//https://codeforces.com/contest/1933/problem/C

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

// Function to calculate power
ll power(ll base, ll exponent) {
    ll result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

// Function to solve the problem
void solve(){
    ll base_a, base_b, limit;
    cin >> base_a >> base_b >> limit;

    set<ll> divisors;

    // Loop to iterate through all possible powers of base_a
    for (ll x = 0;; x++) {
        ll powered_a = power(base_a, x);
        if (powered_a > limit)
            break;
        
        // Loop to iterate through all possible powers of base_b
        for (ll y = 0;; y++) {
            ll temp = powered_a * power(base_b, y);
            if (temp > limit)
                break;
            if (limit % temp == 0) {
                divisors.insert(limit / temp);
            }
        }
    }

    ll result = divisors.size();
    cout << result << "\n";
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
