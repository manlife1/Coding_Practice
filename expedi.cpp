#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.first > p2.first; 
}
int main(){
        int t;
        cin>>t;

        while(t--){
            int n,l,p,prev=0,flag=0,ans=0;
            cin>>n;

            vector<pair<int,int>> v;
            for(int i=0;i<n;i++){
                int x,y;
                cin>>x>>y;
                v.push_back({x,y});
            }
            cin>>l>>p;
            sort(v.begin(),v.end(),compare);

            for(int i=0;i<n;i++){
                v[i].first=l-v[i].first;
            }

            priority_queue<int> pq;

            prev=0;//prev deotes the prev city we visited
            int x=0;//current city

            while(x<n){
                //if we have enough fuel to go to next city
                if(p>=(v[x].first-prev)){
                    p=p-(v[x].first-prev);
                    pq.push(v[x].second);
                    prev=v[x].first;
                } else{
                    //check if you have some fuelling stations visited in the pq
                    if(pq.empty()){
                        flag=1;
                        break;
                    }
                    //otherwise refuel the truck with fuel stations with higher capacity
                    p+=pq.top();
                    pq.pop();//removes fuel from pq
                    ans=ans+1;
                    continue;//as adding fuel doesnt guarantee that we can reach next city so we need to recheck whether more fuel is required
                }
                x++;
            }
            //actually travelled through n fuel stations
            //what is left you have to reach the town from last fuel station
            if(flag==1){
                cout<<-1<<endl;
                continue;
            }
            //otherwise
            l=l-v[n-1].first;
            if(p>=l){
                cout<<ans<<endl;
                continue;
            }
            //otherwise
            while(p<l){
                if(pq.empty()){
                    flag=1;
                    break;
                }
                p+=pq.top();
                pq.pop();
                ans=ans+1;
            }

            if(flag==1){
                cout<<-1<<endl;
                continue;
            }
            cout<<ans<<endl;
        }

    return 0;
}