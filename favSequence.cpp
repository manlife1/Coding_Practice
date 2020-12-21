#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        int p=0;
        int q=n-1;

        while(p<=q){
            if(flag==0){
                cout<<a[p++]<<" ";
                flag=1;
            } else{
                cout<<a[q--]<<" ";
                flag=0;
            }
        }
        cout<<endl;
    }

    return 0;
}