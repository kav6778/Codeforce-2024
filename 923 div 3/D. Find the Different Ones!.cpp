//https://codeforces.com/contest/1927/problem/D

//Approach -1 : Binary Search 
//T.c = O(t*q)
//O(n*q) == 10^5 * 10^5

// Efficient Approach: Create a vector<int>next(n,n) which stores the index of the next different element
//T.C = O(t*q)
//O(n*1) == 10^5

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t; 
    while(t--) {
       int n; 
       cin >> n;
       vector<int> a(n);
       for(auto &i : a) 
           cin >> i;

       vector<int>next(n,n);
       next[n-1] = n;
       for(int i=n-2; i>=0; i--){
        if(a[i] == a[i+1]) next[i] = next[i+1];
        else next[i] = i+1;
       } 
       int q; 
       cin >> q;
       while(q--) {
            int l, r; 
            cin >> l >> r;
            l--;r--; //1 indexing to 0 indexing
            if(next[l]>r) cout<<-1<<" "<<-1<<endl;
            else cout<<l+1<<" "<< next[l]+1<<endl;
       }
       cout<<endl;
    }
    return 0;
}
