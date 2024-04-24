#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=1;
        while(x<=n){
            x*=2;
        }
        x/=2;
        x--;
        cout<<x<<"\n";
    }
    return 0;
}