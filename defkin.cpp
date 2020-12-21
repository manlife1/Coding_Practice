#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        vector<int>x(n);
        vector<int>y(n);

        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        int xMax=INT_MIN;
        int yMax=INT_MIN;

        int l=0,dx=0;
        for(int i=0;i<n;i++){
            dx=x[i]-l-1;
            l=x[i];
            xMax=max(xMax,dx);
        }
        dx=w-l;
        xMax=max(xMax,dx);

        int l1=0,dy=0;
        for(int i=0;i<n;i++){
            dy=y[i]-l1-1;
            l1=y[i];
            yMax=max(yMax,dy);
        }
        dy=h-l1;
        yMax=max(yMax,dy);

        cout<<xMax*yMax<<endl;

    }


    return 0;
}