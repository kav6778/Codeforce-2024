//https://codeforces.com/contest/1937/problem/A

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


int power (int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ans * a;
        }
        a = a*a;
        b = b>>1;
    }
    return ans;
}

void solve(){
    ll n; cin>>n;
    ll t = log2(n);
    cout<<power(2,t)<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
