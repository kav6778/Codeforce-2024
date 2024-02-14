// To Down method
// O(N)

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 25e2+10;

int a[N];
int dp[N];

int lis(int i){ // Longest Increasing subsequence reccursion function 
      int ans =1;
      if(dp[i]!= -1) return dp[i]; //If you have already calucated lis that ends at ith position then return its value
      for(int j=0; j<i; j++){
            if(a[j] < a[i]){
                  ans = max(ans, lis(j)+1); //check the lis of all the numbers behind the ending position
            }
      }
      return dp[i] = ans;
}

void solve() {
    // Write your solution code here
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
      for(int i=0; i<n; i++){
            cin>>a[i];
      }
      int ans = 0;
      for(int i=0; i<n; i++){
            ans = max(ans, lis(i));
      }
      cout<<ans<<endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
