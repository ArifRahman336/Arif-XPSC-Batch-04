#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int x=v[i];
        if(mp[v[i]]!=0){
            ans++;
            while(mp[x]>0){
                mp[x]--;
                x++;
            }
        }
    }
    cout<<ans<<"\n";
    }

    return 0;
}