#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lb=*max_element(arr,arr+n),rb=1e18;

    while(lb<rb){
        int mb=(lb+rb)/2,s=0,c=1;

        for(int i=0;i<n;i++){
            
            if(s+arr[i]>mb){
                s=0;
                c++;
            }
            s+=arr[i];
        }
        if(c<=k){
            rb=mb;
        } else{
            lb=mb+1;
        }
    }

    cout<<lb;
    return 0;
}