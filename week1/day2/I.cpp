#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,y;
    cin>>x>>y;
    int cnt=0;
    for(long long int i=x;i<=y;i=i*2){
        if(i*2<=y) cnt++;
    }
    cout<<cnt+1;
    return 0;
}