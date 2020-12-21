#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cin>>key;

     int s=0,e=n-1;
     
     while(s<=e){
         int mid=(s+e)/2;
         if(arr[mid]==key){
             cout<<mid<<endl;
             return 0;
         }else if(arr[mid]>=arr[s]){
             if(key>=arr[s] and key<=arr[mid]){
                 e=mid-1;
             } else{
                 s=mid+1;
             }
         } else{
             if(key>=arr[mid] and key<=arr[e]){
                 e=mid-1;
             } else{
                 s=mid+1;
             }
         }
     }
    cout<<-1<<endl;
    return 0;
}