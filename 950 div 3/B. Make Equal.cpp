//https://codeforces.com/contest/1931/problem/B
// Q. Determine whether it is possible to make the amount of water in all containers the same using this operation.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const int mod = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;

void solve() {
    // Write your solution code here
    int n; 
    cin >> n;
    int sum_arr = 0;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Fixing typo here, 'a' to 'arr'
        sum_arr += arr[i];
    }
    int final_num = sum_arr / n;
    if (sum_arr % n != 0) {
        cout << "NO" << endl;
    }
    else {
        for (int i = 0; i < n; i++) {
            arr[i] -= final_num;
        }
        if (arr[0] < 0) { // Fixing typo here, 'a' to 'arr'
            cout << "NO" << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (sum < 0) { 
                    
                    break; // Exit loop if sum is negative
                }
                else {
                    sum += arr[i]; 
                }
            }
            if (sum == 0) { // Adding condition for printing "YES" if sum is 0
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
