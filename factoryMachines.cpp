#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int n,t;
    cin>>n>>t;

    int k[n];
    for(int i=0;i<n;i++){
        cin>>k[i];
    }

    int lb=1,rb=1e18;

    while(lb<rb){
        int mb=(lb+rb)/2,s=0;
        for(int i=0;i<n;i++){
            s+=min(mb/k[i],(int)1e9);
        }
        if(s>=t){
            rb=mb;
        } else{
            lb=mb+1;
        }
    }
    cout<<lb<<endl;
    return 0;
}