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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll bit_or=0;
        for(int i=0;i<n;i++){
            bit_or |=v[i];
        }
        cout<<bit_or<<"\n";
    }
    return 0;
}