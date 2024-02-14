//What is the min cost to reach the last from first postion if k length jump is possible
// previously k=2 
// O(N*K)

// 1
// 4 2
// 10 30 40 20
// output: 30

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 25e2+10;

int k;
int h[N];
int dp[N];

int func(int i){
      //base case 
      if(i == 0) return 0;
      //cache check
      if(dp[i] != -1) return dp[i]; //if the min cost to reach that postion is already calcualted then return 
      //compute
      int cost = INT_MAX;

      for(int j=1; j<=k; j++){
            if(i-j >=0)
            cost = min(cost, func(i-j) + abs(h[i]-h[i-j]));
      }
      
      //save and return
      return dp[i]=cost;
}

void solve() {
    // Write your solution code here
    memset(dp, -1, sizeof(dp));
    int n; cin>>n>>k;
      for(int i=0; i<n; i++){
            cin>>h[i];
      }
    cout<<func(n-1)<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
