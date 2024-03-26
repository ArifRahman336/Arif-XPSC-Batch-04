#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int mx_fr=0;
        for(auto i:mp){
            mx_fr=max(mx_fr,i.second);
        }
        int ans=0;
        while(mx_fr<n){
            int rem=n-mx_fr;
            int add=mx_fr;
            ans++; 
            ans+=min(add,rem);
            mx_fr+=min(add,rem);
        }
        cout<<ans<<"\n";
    }
    return 0;
}