#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n>>x;
        vector<long long int>v(n+1,0),v1(n+1,0);
        for(long long int i=1;i<=n;i++){
            cin>>v[i];
        }
        for(int i=1;i<=n;i++){
            v1[i]=v1[i-1]+v[i];
        }
        while(x--){
            long long int l,r,k;
            cin>>l>>r>>k;
           long long int sum=v1[n]-(v1[r]-v1[l-1])+(k*(r-l+1));
           if(sum%2!=0) cout<<"YES"<<"\n";
           else cout<<"NO"<<"\n";
        // cout<<sum<<"\n";
        }
    }
    return 0;
}