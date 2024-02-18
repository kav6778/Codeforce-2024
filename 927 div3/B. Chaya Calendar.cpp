// https://codeforces.com/contest/1932/problem/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void myself(){
      int n; cin>>n;
      int a[n];
      ll cur = 0;
      for(int i=0; i<n; i++){
            cin>>a[i];
            cur = cur/a[i] + 1;
            cur *= a[i];
      }
      cout<<cur<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        //solve();
        myself();
    }

    return 0;
}
