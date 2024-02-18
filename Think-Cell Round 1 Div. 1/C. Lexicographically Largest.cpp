//https://codeforces.com/contest/1930/problem/C

// maintan a freq map of a + i and start print form right and remove it from map 
// if the freq y is >1 then increase the previous a + i freq by y - 1

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    int n; 
    cin >> n;
    map<int,int> mp;
    
    for(int i = 1; i <= n; i++){
        int a; 
        cin >> a;
        mp[a + i]++;
    }
    
    for(int i = 1; i <= n; i++){
        auto it = mp.rbegin();
        int x = it->first;
        int y = it->second;
        mp.erase(x);
        (i < n) ? (cout << x << " ") : (cout << x << endl);
        // If frequency of that number is more than one then 
        if(y > 1) 
            mp[x - 1] += y - 1;
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
