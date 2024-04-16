#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+4][n];
        for(int i=1;i<=n;i++){
            for(int j=1;j<n;j++){
                cin>>a[i][j];
            }
        }
        map<int,int>mp;
        map<int,int>m;
        for(int i=1;i<=n;i++){
            mp[a[i][n-1]]=i;
            m[a[i][n-1]]++;
        }
        int k=0,val;
        for(auto x:m){
            if(x.second==1) k=x.first;
            else val=x.first;
        }
        for(int i=1;i<n;i++){
            cout<<a[mp[k]][i]<<" ";
        }
        cout<<val<<"\n";
    }
    return 0;
}