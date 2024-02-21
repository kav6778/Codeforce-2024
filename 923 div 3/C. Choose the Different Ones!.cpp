//https://codeforces.com/contest/1927/problem/C

#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
 
    set<int> a_set, b_set;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (x <= k)
            a_set.insert(x);
    }
    for (int i = 0, x; i < m; ++i) {
        cin >> x;
        if (x <= k)
            b_set.insert(x);
    }
 
    if (a_set.size() + b_set.size() < k || a_set.size() < k / 2 || b_set.size() < k / 2) {
        cout << "NO" << endl;
    } else {
          set<int> combined;
          for (int x : a_set) {
              combined.insert(x);
          }
          for (int x : b_set) {
              combined.insert(x);
          }
      
          if (combined.size() == k) {
              cout << "YES" << endl;
          } else {
              cout << "NO" << endl;
          }
    }
    
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
