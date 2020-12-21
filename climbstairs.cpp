#include <bits/stdc++.h>
using namespace std;

int stair(int n,int *dp){
    if(n==0 or n==1){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }

    dp[n]=stair(n-1,dp)+stair(n-2,dp);
    return dp[n];

}

int main(){
    int n;
    cin>>n;
    int dp[n+1]={0};
    cout<<stair(n,dp)<<endl;
 return 0;
}