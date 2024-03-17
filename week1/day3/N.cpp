#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i+1!=v[i]){
            cout<<i+1;
            break;
        }
       // cout<<v[i]<<" ";
    }
    return 0;
}