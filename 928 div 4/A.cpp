#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt_A = 0;
        int cnt_B = 0;
        for(int i=0; i<5; i++){
            if(s[i]=='A') cnt_A++;
            else if(s[i]=='B') cnt_B++;
        }
        (cnt_A>cnt_B) ? (cout<<"A"<<endl) : (cout<<"B"<<endl);
        }
    }
}