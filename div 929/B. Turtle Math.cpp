//https://codeforces.com/contest/1933/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        long long sum = 0;
        
        // Input array elements and calculate the sum
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        
        // Calculate the remainder when sum is divided by 3
        int rem = sum % 3;
        
        int moves = 0;

        if(rem != 0){
            int min_changes = rem == 1? 2 : 1;

            for(auto &i :a){
                int tempsum = sum -i;
                int c = 0;
                if(tempsum % 3 == 0) c =1;
                else{
                    c = tempsum%3 == 1?2:1;
                    c++;
                } 
                min_changes = min(c,min_changes);
            }
            moves = min_changes;
        }
        cout<<moves<<endl;
        
    }
    
    return 0;
}
