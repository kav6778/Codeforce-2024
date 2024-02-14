//memoisation 
//Top down method

// only recursion TC = O( pow(2,N) )
// with dp TC = O(N)

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e5+10;

// 0 1 1 2 3 5 8
int dp[N];

int fib(int n){ //nth fibonacci number
      //base case
      if(n == 0) return 0;
      if(n == 1) return 1;
      
      //cache check
      if(dp[n]!= -1) return dp[n];
      
      //save and return
      return dp[n] = fib(n-1) + fib(n-2);
}



void solve() {
    // Write your solution code here
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
      cout<<fib(n)<<endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
