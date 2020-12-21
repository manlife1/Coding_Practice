#include <bits/stdc++.h>
using namespace std;
#define ar array
#define int long long int

int32_t main(){
    int n,m;
    cin>>n>>m;
    
    set<ar<int,2>> s;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        s.insert({a,i});
    }

    for(int i=0;i<m;i++){
        int t;
        cin>>t;

        auto it=s.lower_bound({t+1,0});
        if(it==s.begin()){
            cout<<"-1\n";
        } else{
            --it;
            cout<<(*it)[0]<<"\n";
            s.erase(it);
        }
    }


    return 0;
}