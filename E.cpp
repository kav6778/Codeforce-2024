#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


void solve(){
    int n,k; cin>>n>>k;
    if(k<= (n+1)/2) cout<<2*k -1 <<endl; // Return the kth odd number
    else{
        int sum = (n+1)/2; //No.of Numbers placed
        int power = 2;
        while(power<=n){
            int numberPos = n/power; //Number of position to be placed
            sum += (numberPos+1) /2; //No. of placed positions
            if(k<= sum){
                int idx = (numberPos +1)/2 - (sum-k); //find the index of the odd number that is multiplied with
                cout<<(2*idx - 1) *power <<endl; //ith odd number multiplied with power
                break;
            }
            power *=2; //only multiples of 2 power will be placed without overlappinng
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}