#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min(a,b);
    int mx=max(a,b);
    int k=0;
    int i=1;
    if(c%mx==0 || c%mn==0){
        cout<<"Yes";
        return 0;
    }
    //int tmp=mx;
    while(mx<=c){
        c=c-mx;
        if(c%mn==0){
            k=1;
            break;
        }
    }
    if(k==1) cout<<"Yes";
    else cout<<"No";
    return 0;
}