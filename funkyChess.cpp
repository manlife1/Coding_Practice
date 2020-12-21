#include <bits/stdc++.h>
using namespace std;
int ans,n;
int grid[11][11];

void reachable(int x,int y,int cnt){
    if(x<0 or x>=n or y<0 or y>=n or grid[x][y]==0){
        return; 
    }

    
    grid[x][y]=0;
    ans=max(ans,cnt+1);
    
    reachable(x-2,y-1,cnt+1);
    reachable(x-2,y+1,cnt+1);
    reachable(x-1,y-2,cnt+1);
    reachable(x-1,y+2,cnt+1);
    reachable(x+1,y-2,cnt+1);
    reachable(x+1,y+2,cnt+1);
    reachable(x+2,y-1,cnt+1);
    reachable(x+2,y+1,cnt+1);
    grid[x][y]=1;
}
int main(){
    int sum=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]){
                sum++;
            }
        }
    }
    int cnt=0;
    reachable(0,0,cnt);
    cout<<sum-ans;
    return 0;
}