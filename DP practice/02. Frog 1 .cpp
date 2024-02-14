//What is the min cost to reach the last from first postion if k=2 length jump is possible
// Top down method
// O(n)

// 1
// 4
// 10 30 40 20

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 25e2+10;

int h[N];
int dp[N];


int func(int i){
      //base case 
      if(i == 0) return 0;
      //cache check
      if(dp[i] != -1) return dp[i]; //if the min cost to reach that postion is already calcualted then return 
      //compute
      int cost = INT_MAX;
      //way 1:
      cost = min(cost, func(i-1) + abs(h[i] - h[i-1]));
      //way 2:
      if(i>1)
      cost = min(cost, func(i-2) + abs(h[i] - h[i-2]));
      
      //save and return
      return dp[i]=cost;
}

void solve() {
    // Write your solution code here
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
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
