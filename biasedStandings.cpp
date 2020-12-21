#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        multimap<int,string> mp;
        for(int i=0;i<n;i++){
            int x;
            string y;
            cin>>y>>x;
            mp.insert({x,y});
        }
        int ans=0;
        int r=1;
        for(auto it=mp.begin();it!=mp.end();it++){
            int z=(*it).first;
            ans+=abs(r-z);
            r++;
        }
        cout<<ans<<endl;
    }

    return 0;
}