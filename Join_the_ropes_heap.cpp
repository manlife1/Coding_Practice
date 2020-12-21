#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long int
int join_ropes(int *ropes,int n){
    int ans=0;
    priority_queue<int,vector<int>,greater<int>> pq(ropes,ropes+n);
    while(pq.size()>1){
        int A=pq.top();
        pq.pop();
        int B=pq.top();
        pq.pop();
        
        int new_rope=A+B;
        ans+=new_rope;
        pq.push(new_rope);
    }
    return ans;
}
int32_t main()
 {
	//code,
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ropes[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>ropes[i];
	    }
	    
	    int ans=join_ropes(ropes,n);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
