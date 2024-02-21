#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


void solve(){
    int n; cin>>n;
    vector<string> grid(n);
    for(int i=0; i<n; i++){
        cin>>grid[i];
    }

    //find the first cell
    int row =-1;
    int col =-1;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == '1'){
                row = i;
                col = j;
                break;
            }
        }
        if(row != -1) {break;}
    }

    //now check the length of the one in the first two row
    int cnt_A =0;
    int cnt_B =0;
    for(int j=col; j<n; j++){
        if(grid[row][j] == '1'){
            cnt_A ++;
        }
        else break;
    }
    for(int j=col; j<n; j++){
        if(grid[row+1][j] == '1'){
            cnt_B ++;
        }
        else break;
    }

    (cnt_A == cnt_B) ? (cout<<"SQUARE"<<endl) : (cout<<"TRIANGLE"<<endl);

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}