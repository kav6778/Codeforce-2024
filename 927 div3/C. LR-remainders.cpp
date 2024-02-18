// https://codeforces.com/contest/1932/problem/C

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
#define vi vector<int>

const int mod = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const int N = 1e5+10;



void solve() {
    // Write your solution code here
    int n,m; cin>>n>>m;
    vi a(n);
    for(auto &x: a) cin>>x;
    string s; cin>>s;
    ll l =0, r = n-1;
    for(const auto &x: s){
          l+=x == 'L';
          r-=x == 'R';
    }
    assert(r+1==l); //array will be empty where left pointer one more than the right
    
    ll prod = 1;
    vi resp(n);
    for(int i=n-1; i>=0; i--){
          const int dir = s[i]; //assign ASCII value
          if(dir == 'L'){
                l--;
                prod = (prod*a[l])%m;
          }else {
                r++;
                prod = (prod*a[r])%m;
          }
          resp[i] = prod;
    }
    
    for(auto x:resp){
          cout<<x<<" ";
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
