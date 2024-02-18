//https://codeforces.com/contest/1931/problem/C
//Q. what is the minimum length of the subarry you have to change to make all the elements equal
//O(n)
//Two pointer problem

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const int mod = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;

void solve() {
    // Write your solution code here
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
          cin>>v[i];
    }
    
    //Using Two pointers
    ll l=0, r=n-1;
    while(v[l] == v[0]) l++;  // Move left pointer until it reaches an element different from the first element
    while(v[r] == v[n-1]) r--;  // Move right pointer until it reaches an element different from the last element
    if(n==1){ // If there's only one element in the array
          cout<<0<<endl;
          return;
    }
    
    if(v[0] != v[n - 1])
      cout << min(n - l, r + 1) << endl;
    else // If all elements are the same
      cout << max(0ll , r - l + 1) << endl; // The result is the range [l, r]
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}

