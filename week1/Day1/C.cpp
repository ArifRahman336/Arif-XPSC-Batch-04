#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a!=b){
        int mx=max(a,b);
        cout<<mx+mx-1<<"\n";
    }
    else cout<<2*a<<"\n";
    return 0;
}