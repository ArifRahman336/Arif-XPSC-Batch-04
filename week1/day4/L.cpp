#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,y=0;
        cin>>n;
        vector<long long int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]>(i+1)){
               y=abs(v[i]-(i+1));
               ans=max(y,ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}