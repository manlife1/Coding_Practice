#include <bits/stdc++.h>
using namespace std;

#define int long long int

string shiftRight(string s){
	int n=s.size();
	if(n==0){
		return "";
	}
	reverse(s.begin(),prev(s.end()));
	reverse(s.begin(),s.end());
	return s;
}

int binaryToDec(string s){
	int n=s.size();
	int p=1;
	int ans=0;

	for(int i=n-1;i>=0;i--){
		char ch=s[i];
		ans=ans+(ch-'0')*p;
		p=p*2;
	}
	return ans;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string s;
	cin>>s;
	int ans=0;
	int maxPower=INT_MIN;
	int n=s.size()-1;
	while(n--){
		int p=binaryToDec(s);
		if(p%2==0){
			ans=0;
			while(p%2==0){
				ans++;
				p/=2;
			}
			maxPower=max(maxPower,ans);
		} else{
			ans=0;
		}
		maxPower=max(ans,maxPower);
		s=shiftRight(s);
	}
	
	cout<<maxPower<<endl;
	
	


	return 0;
}