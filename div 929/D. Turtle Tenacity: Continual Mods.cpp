//https://codeforces.com/contest/1933/problem/D

#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


void yes(){
    int n;
    cin >> n;
    
    vector<int> a;
    vector<int> x(n);
    map<int,int> mp;
    
    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >>x[i];
        mp[x[i]]++;
    }
    bool possible = true; 

    // If there's only one distinct element, it's not possible
    if(mp.size() == 1) {
        cout << "NO" << endl;
        return;
    }

    // If the frequency of the smallest element is 1, it's not possible
    if(mp.begin()->second == 1) {
        //possible = true; 
         cout<<"YES"<<endl;
         return;
    }

    for(auto &i: mp) {
        a.push_back(i.first);
    }
    
    // Check if all elements are multiples of the first element
    for(int i = 1; i < a.size(); i++) {
        if(a[i] % a[0] != 0) {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;
    while(tt--){
        yes();
    }
    return 0;
}
