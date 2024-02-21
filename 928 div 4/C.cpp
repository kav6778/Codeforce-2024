#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
using namespace std;


int sumOfDigits(int n, int a[]){//recursive function
    // array stores the sum of digits from 1 to 10^i-1
    if(n<10) return (n*(n+1)/2);
    int d = (int) log10(n); // Number of digits
    int p = (int)(ceil(pow(10,d))); //pow of 10 equal to the number of digits in 'n
    int msd = n/p; //most significant digit 

    return (msd * a[d]+ (msd*(msd-1)/2 * p) + msd *(1 + n%p)+ sumOfDigits(n%p, a));  
    
}

int getSum(int n){
    int d = (int)(log10(n));
    int a[d+1];
    a[0] = 0; a[1] = 45;

    for(int i=2; i<=d; i++)
        a[i] = a[i-1] * 10 + 45 * (int)(ceil(pow(10,i-1)));

    return sumOfDigits(n,a);
}

void solve(){
    int n; cin>>n;
    int ans=0;
    cout<<getSum(n)<<endl;
   
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}