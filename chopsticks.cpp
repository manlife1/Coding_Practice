#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,d;
    cin>>n>>d;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int ans=0;
    
    for(int i=1;i<n;){
        if(arr[i]-arr[i-1]<=d){
            ans++;
            i=i+2;
        } else{
            i++;
        }
    }

    cout<<ans<<endl;
    return 0;
}