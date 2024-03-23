#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans=mp.size();
        if((n-ans)%2!=0) ans--;
        cout<<ans<<"\n";
    }
    return 0;
}