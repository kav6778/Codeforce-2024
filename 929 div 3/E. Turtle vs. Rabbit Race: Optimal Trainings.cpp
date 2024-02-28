#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


void solve(){
    int n; cin>>n;
    vector<int> prefixSum(n+1);
    int x;
    for(int i=1; i<=n; i++){
        cin>>x; prefixSum[i] = prefixSum[i-1]+x;
    }
    int q; cin>>q;
    int l,u;
    while(q--){
        cin>>l>>u;
        u += prefixSum[l-1];
        int ans = lower_bound(prefixSum.begin()+1, prefixSum.end(),u)-prefixSum.begin();
        if(prefixSum[ans] - u > u - prefixSum[ans-1]) ans--; //if the range is exceede come a step back
        ans = max(ans,l); //it should not be less than l
        ans = min(ans,n); //it should be within the array
        cout<<ans<<" ";
    }
    cout<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
