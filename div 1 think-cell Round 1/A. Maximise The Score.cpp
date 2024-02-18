//https://codeforces.com/contest/1930/problem/A
//O(n)
//Q. Find the sum of min of the alternate pairs in the sorted array
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    // Write your solution code here
    int n; cin>>n;
    vector<ll>v(2*n + 1);
    for(int i=1; i<=2*n; i++){
          cin>>v[i];
    }
    sort(v.begin() + 1, v.end());
    
    ll sum =0;
    ll l=1, r=2;
    while(r <= 2*n){
          sum += min(v[l],v[r]);
          l += 2;
          r += 2;
    }
    cout<<sum<<endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
