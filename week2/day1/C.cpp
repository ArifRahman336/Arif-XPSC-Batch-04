#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a!=x){
            v.push_back(a);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}