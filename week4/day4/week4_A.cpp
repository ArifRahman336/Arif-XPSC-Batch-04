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
        int x=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            x^=v[i];
        }
        int ans=x;
        for(int i=0;i<n;i++){
            ans=min(ans,x^v[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}