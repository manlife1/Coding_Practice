#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int mxN=100;
int dp[mxN];

int countStr(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }

    if(dp[n]!=0){
        return dp[n];
    }

    return dp[n]=(countStr(n-1)+countStr(n-2));
}

int32_t main(){
    int t;
    cin>>t;

    while (t--){   int n;
        memset(dp,0,sizeof dp);
        cin>>n;
        cout<<countStr(n)<<endl;
    }

    return 0;
}