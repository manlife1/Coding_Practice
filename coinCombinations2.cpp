#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int mxN=100,mxX=1e6,M=1e9+7;
int n,x;
int c[mxN];
int dp[mxX+1];

int32_t main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    dp[0]=1;
    for(int j=0;j<n;j++){
        // dp[i]=1e9;
        for(int i=1;i<=x;i++){
            if(c[j]<=i){
                dp[i]=(dp[i]+dp[i-c[j]])%M;
            }
        }
    }
    //(dp[x]==1e9)? cout<<-1 :cout<<dp[x];
    cout<<dp[x];
    return 0;
}