#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[],int n,int d){
    reverse(arr+n-1-(d-1),arr+n);
    reverse(arr,arr+n-1-(d-1));
    reverse(arr,arr+n);
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
	    int d=1;
	    rotateArray(arr,n,d);
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}