#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x=-1;
        for(int i=0;i<n;i++){
            if((v[i] & k)==k) x &= v[i];
        }
        if(x==k) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}