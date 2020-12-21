#include <bits/stdc++.h>
using namespace std;

#define int long long int

int ways(int n){
    if(n<=1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return ways(n-1)+(n-1)*ways(n-2);
}
int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<ways(n)<<endl;
    }
    return 0;
}