// https://codeforces.com/contest/1930/problem/B
// Q. print the permutataion of p of length n 
// such that there do not exist two distinct indices i and j (1≤i,j<n; i≠j) 
// such that pi divides pj and pi+1 divides pj+1.

//O(n) - Two pointer 

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
    // Write your solution code here
    ll n; cin>>n;
    ll l = 1, r = n;
    while(l<=r){
          cout<<r<<" ";
          r--;
          if(l<=r){
                cout<<l<<" ";
                l++;
          }
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
