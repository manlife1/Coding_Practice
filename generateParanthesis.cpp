#include <bits/stdc++.h>
using namespace std;

#define int long long int

void generateParanthesis(int n,int o,int c,string ans){
    if(o==n and c==n){
        cout<<ans<<endl;
        return;
    }
    

    
    if(o>c) generateParanthesis(n,o,c+1,ans+")");
    if(o<=n) generateParanthesis(n,o+1,c,ans+"(");
}

int32_t main(){
    int n;
    cin>>n;

    generateParanthesis(n,0,0,"");
    return 0;
}