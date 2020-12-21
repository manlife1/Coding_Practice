#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        set<pair<int,int>> s;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            s.insert({y,x});
        }
        int l=0,ans=0;
        for(auto it=s.begin();it!=s.end();it++){
            pair<int,int> p= *it;
            if(p.second >= l){
                ans++;
                l=p.first;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}