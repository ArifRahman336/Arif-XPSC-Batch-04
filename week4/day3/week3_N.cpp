#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll x=0,y=0;
        bool negSeg=false;
        for(int i=0;i<=n;i++){
            if(i<n) x+=abs(v[i]);
            if(negSeg){
                if(i==n || v[i]>0){
                    y++;
                    negSeg=false;
                }
            }
            else{
                if(v[i]<0) negSeg=true;
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}