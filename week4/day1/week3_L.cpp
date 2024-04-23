#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i);
        }
        while(q--){
            int a,b;
            cin>>a>>b;
            if(mp[a].empty() || mp[b].empty()){
                cout<<"NO"<<"\n";
                continue;
            }
            if(a==b){
                cout<<"YES"<<"\n";
                continue;
            }
            if(mp[a].front()<mp[b].back()){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}