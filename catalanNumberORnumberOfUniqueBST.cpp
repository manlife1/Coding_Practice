
// Functiuon to return number of trees
#define mod 1000000007
// Return the total number of BSTs possible with keys [1....N] inclusive.
long long numTreesHelper(int n){
    long long dp[n+1]={0};//long long type is necessary else overflow occurs
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
            long long p=1;
            p=(p*dp[j])%mod;
            p=(p*dp[i-j-1])%mod;
            dp[i]=((dp[i]%mod)+(p)%mod)%mod;
        }
    }
    return dp[n]%mod;
}
int numTrees(int N) {
    // Your code here
    long long ans=numTreesHelper(N);
    return (int)ans;
    
}