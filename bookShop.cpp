#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ar array
const int mxN=1000,mxX=1e5,M=1e9+7;
int n,x,h[mxN],s[mxN];
int dp[mxX+1];

int32_t main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        for(int j=x;j>=h[i];j--){
            dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
        }
    }
    cout<<dp[x];
    return 0;
}