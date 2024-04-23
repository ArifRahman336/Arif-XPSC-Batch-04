#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll x=0;
        ll y=0;
        for(int i=0;i<n;i++){
            if(v[i]<=q){
                y++;
                if(i==n-1 || v[i+1]>q){
                    if(y>=k){
                       ll z=y-k+1LL;
                       ll add=(z*(z+1LL))/2LL;
                       x+=add;
                    }
                 y=0;   
                }
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}