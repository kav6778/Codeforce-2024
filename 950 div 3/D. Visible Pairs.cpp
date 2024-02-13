// Hashing technique - Find the number of pairs whose sum is divisible by k.
// Q. Find the number of pairs whose sum is divisible by x and sub is divible by y
// O(n)

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int mod = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        int n,x,y; cin>>n>>x>>y;
        vector<int> v(n);
        unordered_map<ll,unordered_map<ll,ll>> mp;
        // Count the occurrences of remainders when dividing each element by x and y
        for(int i=0; i<n; i++){
                cin>>v[i];
                mp[v[i]%x][v[i]%y]++;
         }
      
        ll  ans = 0;
        auto cmp = [&](int val){
              return (x-(val%x))%x; // Calculate the complementary remainder
        };
      
         // Calculate the total number of beautiful pairs
        for(auto i:v) ans +=mp[cmp(i)][i%y] -(i%x == cmp(i));
      
        // Each pair is counted twice, so divide by 2 to get the actual count
        cout<<ans/2<<endl;
    }

    return 0;
}
