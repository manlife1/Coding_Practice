#include<bits/stdc++.h>
using namespace std;
//0 2 1 2 0
void mySort(int arr[],int n){
    int left=0;
    int mid=0;
    int right=n-1;
    
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[mid++],arr[left++]);
        } else if(arr[mid]==1){
            mid++;
        } else{
            swap(arr[mid],arr[right--]);
        }
    }
}
int main()
 {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        mySort(arr,n);
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}