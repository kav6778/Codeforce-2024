#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
using namespace std;


const int MASK = 2e31 -1;

void solve(){
  int n; cin>>n;
  vector<int>a(n); for(auto &i:a)cin>>i;

  multiset<int>ms;
  int ans = 0; // the number of groups of size two
  for(auto &i:a){
    if(ms.find(MASK^i) != ms.end()) ans++, ms.erase(ms.find(MASK^i));
    else ms.insert(i);
  }
  cout<<ans + ms.size()<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}