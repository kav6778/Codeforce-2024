#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;



void solve(){
    int n; cin>>n;
    vector<int> adj[n+1];
    for(int i=2; i<=n; i++){
        int x; cin>>x;
        adj[x].push_back(i);
    }

    string s; cin>>s; s = '$' +s;

    vector dp(n+1 , vector (2,-1));

    function<int(int,int)> dfs = [&] (int node, int parCol){
        if(dp[node][parCol] != -1) return dp[node][parCol];

        int makeS = INT_MAX, makeP = INT_MAX;

        if(s[node] != 'P'){
            makeS = (s[node] == 'C' && parCol == 1);
            for(auto &i : adj[node]) makeS += (s[i] == 'P') + dfs(i,0);
        }
        if(s[node] != 'S'){
            makeP = (s[node] == 'C' && parCol == 0);
            for(auto &i : adj[node]) makeP += (s[i] == 'S') + dfs(i,1);
        }

        return dp[node][parCol] = min(makeS, makeP);
    };

    cout<<min(dfs(1,0), dfs(1,1)) <<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}