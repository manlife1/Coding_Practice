#include <bits/stdc++.h>
using namespace std;


void partition(string n,string ans,vector<string> &v){
    if(n.size()==0){
        v.push_back(ans);
        return;
    }

    for(int i=1;i<=n.size();i++){
        string nLeft=n.substr(i,n.size()-1);
        string comp=n.substr(0,i);
        int a=stoi(comp);
        if(a<=26){
            char temp=a-1+'a';
            ans.push_back(temp);
            partition(nLeft,ans,v);
            ans.pop_back();
        }
    }
}

vector<string> ans(string n){
    vector<string> v;
    partition(n,"",v);
    return v;
}
int32_t main(){
    string n;
    cin>>n;

    vector<string> v=ans(n);
    cout<<"[";
    cout<<v[0];
	for(int i=1;i<v.size();i++){
		cout<<", "<<v[i];
	}
    cout<<"]";
    return 0;
}