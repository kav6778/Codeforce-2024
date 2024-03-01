//https://codeforces.com/contest/1937/problem/B

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


void solve(){
    int n; cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    string s; 
    int l = 0; 
    int f= 0;
    while(l<n){
        if(f==0){
            s+=s1[l];
            if(l+1<n && s2[l]<s1[l+1])
                f =1;
            else if(l+1 == n){
                s+=s2[l];
                break;
            }
            else l++;
        }
        else {
            s+= s2[l];
            l++;
        }
    }
    cout<<s<<endl;
    ll ans = 1;
    for(int i=1; i<n; i++){
        if(s1[i] == s2[i-1]) ans++;
        else if(s1[i] == '0' && s2[i-1] == '1') ans = 1;
        else break;
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}

 
