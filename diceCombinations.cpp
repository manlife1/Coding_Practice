#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ar array
const int mxN=1e6,M=1e9+7;
int dp[mxN+1];
int n;

int32_t main(){
    cin>>n;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(6ll,i);j++){
            dp[i]=(dp[i]+dp[i-j])%M;
        }
    }
    cout<<dp[n];
    return 0;
}