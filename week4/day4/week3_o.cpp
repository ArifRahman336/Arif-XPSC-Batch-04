#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=0;
        while(n!=0){
            x+=n;
            n/=2LL;
        }
        cout<<x<<"\n";
    }
    return 0;
}