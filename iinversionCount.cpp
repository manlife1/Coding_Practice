#include <bits/stdc++.h>
using namespace std;

int merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int temp[e+1];
    int i=s,k=s;
    int j=mid+1;
    int count=0;
    while(i<=mid and j<=e){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        } else{
            count+=(mid-i+1);
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(int p=s;p<=e;p++){
        arr[p]=temp[p];
    }
    return count;
}
int inversionCount(int *arr,int s,int e){
    
    if(s>=e){
        return 0;
    }
        int mid=(s+e)/2;
        int x=inversionCount(arr,s,mid);
        int y=inversionCount(arr,mid+1,e);
        int z=merge(arr,s,e);
        return x+y+z;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

        int ans=inversionCount(arr,0,n-1);
        cout<<ans<<endl;
    }

    return 0;
}