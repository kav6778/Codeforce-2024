//https://codeforces.com/contest/1927/problem/B

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
string reconstructString(vector<int>& trace) {
    string s = "";
    vector<int> last_occurrence(26, -1); // Initialize with -1 to represent not occurred yet
 
    for (int i = 0; i < trace.size(); i++) {
        for (int j = 0; j < 26; j++) {
            if (trace[i] == 0) {
                if (last_occurrence[j] == -1) {
                    s += char('a' + j); // Append character if it hasn't occurred before
                    last_occurrence[j] = trace[i]; // Update last occurrence index
                    break;
                }
            } else {
                if (last_occurrence[j] != -1 && last_occurrence[j] == trace[i]-1) {
                    s += char('a' + j); // Append character if it occurred before and it's been enough distance from its last occurrence
                    last_occurrence[j] = trace[i]; // Update last occurrence index
                    break;
                }
            }
        }
    }
 
    return s;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);
        for (int i = 0; i < n; i++) {
            cin >> trace[i];
        }
 
        string reconstructed = reconstructString(trace);
        cout << reconstructed << endl;
    }
 
    return 0;
}
