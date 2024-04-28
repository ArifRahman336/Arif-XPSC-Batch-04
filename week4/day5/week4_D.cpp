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
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            ans^=v[i];
        }
        if(ans==0) cout<<0<<"\n";
        else{
            if(n%2==1) cout<<ans<<"\n";
            else cout<<-1<<"\n";
        }
    }
    return 0;
}