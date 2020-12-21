#include <bits/stdc++.h>
using namespace std;

bool isDigitUnique(int n){
    map<int,int> mp;
    while(n>0){
        int r=n%10;
        if(mp.find(r)!=mp.end()){
            return false;
        }
        mp[r]=1;
        n/=10;
    }
    return true;
}
int digiSum(int n){
    int sum=0;
    while(n>0){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ans=-1;
        int flag=0;
        for(int i=0;i<INT_MAX;i++){
            if(digiSum(i)==n){
                if(isDigitUnique(i)){
                    flag=1;
                    cout<<i<<endl;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<-1<<endl;
        }
        
    }

    return 0;
}