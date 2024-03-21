#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<m;i++) cin>>v2[i];
    int x=0,y=0,ans=0;
    while(y<m){
        while(v2[y]>v1[x] && x<n){
            ans++;
            x++;
        }
        y++;
        cout<<ans<<" ";
    }
    cout<<"\n";
    return 0;
}