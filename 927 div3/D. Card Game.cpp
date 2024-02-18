//https://codeforces.com/contest/1932/problem/D

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
const int N = 1e5+10;


void solve() {
    // Write your solution code here
    int n; cin>>n;
    string s ; cin>>s;
    const char trump = s[0];
    
    map<char,vector<string>> cards;
    vector<string> tcards;
    
    for(int i=0; i<2*n; i++){
          string card; cin>>card;
          if(card[1] == trump){
                tcards.push_back(card);
          }
          else{
                cards[card[1]].push_back(card);
          }
    }
      bool flag = true;
      sort(all(tcards));
      vector<string> game;
      for(auto &x: cards){
            auto &v = x.second;
            int m = v.size();
            sort(all(v));
            if(m%2){
                  if(tcards.empty()){
                     flag = false;
                     break;
                  }
                  game.push_back(v.back()+ " "+ tcards.back());
                  v.pop_back();
                  tcards.pop_back();
                  m--;
            }
            for(int j=0; j<m; j+=2){
                  game.push_back(v[j]+ " "+ v[j+1]);
            }
            v.clear();
      }
      
      //Pairing the tcards
      if(flag && !tcards.empty() ){
            int m = tcards.size();
            assert(m%2 == 0); //abort if size not even
            for(int j=0; j<m; j+=2)
                  game.push_back(tcards[j]+ " " + tcards[j+1]);
            
      }
        
      //Impossible case
      if(!flag){
            cout<<"IMPOSSIBLE"<<endl;
            return;
      }
      
      //Print the game
      for(const auto& s:game){
            cout<<s<<endl;
      }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; while (t--) {
        solve();
    }

    return 0;
}
