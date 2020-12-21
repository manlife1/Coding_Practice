#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int M=1e9+7;
int a[100005];
int dp[100005][105];


int32_t main(){
    int n,m;
    memset(dp,0,sizeof(dp));
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    if(a[1]==0){
        for(int j=1;j<=m;j++){
            dp[1][j]=1;
        }
    } else{
        dp[1][a[1]]=1;
    }

    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=1;j<=m;j++){
                for(int k:{j-1,j,j+1}){
                    if(k>=1 and k<=m){
                        (dp[i][j]+=dp[i-1][k])%=M;
                    }
                }
            }
        } else{
            for(int k:{a[i]-1,a[i],a[i]+1}){
                if(k>=1 and k<=m){
                    (dp[i][a[i]]+=dp[i-1][k])%=M;
                }
            }
        }
    }
    int ans=0;
    
        for(int j=1;j<=m;j++){
            ans=(ans+dp[n][j])%M;
        }
cout<<ans;
    return 0;
}