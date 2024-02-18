//https://codeforces.com/contest/1932/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string path;
        cin >> path;
        int coins = 0;
        for (int i = 0; i < n; i++) {
              if(path[i] == '@'){
                    coins++;
              }
              if ( i+1 <n && path[i] == '*' && path[i + 1] == '*') {
                  break;
              }
    }
    cout<<coins<<endl;
    }
    return 0;
}
