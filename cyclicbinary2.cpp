#include <bits/stdc++.h>
using namespace std;

#define int long long int

pair<int,int> cnts(string s){
	pair<int,int> p;
	int n=s.size();
	int ones=0;
	int zeros=0;


	for(int i=0;i<n;i++){
		char ch=s[i];
		if(ch-'0'==1){
			ones++;
		} else{
			zeros++;
		}
	}

	p=make_pair(ones,zeros);
	return p;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string s;
	cin>>s;
	int n=s.size();
	pair<int,int> p;
	int ans=0;
	int power=0;
	int maxPower=INT_MIN;

	p=cnts(s);

	if(p.second==n){
		cout<<"0"<<endl;
	} else{
		int ones=p.first;
		int zeros=p.second;
		int q=1;
		while(zeros--){
			q=q*2;
		}

		while(ones--){
			ans=ans+(q);
			q=q*2;
		}
		
		if(ans%2==0){
			int x=2;
			power=0;
			while(ans%x==0 and power<LLONG_MAX){
				power++;
				x=x*2;
			}
			maxPower=max(maxPower,power);
		} else{
			power=0;
		}
		maxPower=max(power,maxPower);
		if(maxPower==LLONG_MAX){
			cout<<-1<<endl;
		} else{
			cout<<maxPower<<endl;
		}
		
	}





	return 0;
}