#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(c=='g'){
        cout<<"0"<<"\n";
        continue;
    }
    vector<int>v;
    s+=s;
    int x=0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='g') v.push_back(i);
    }
    for(int i=0;i<n;i++){
        if(s[i]==c){
            int y=lower_bound(v.begin(),v.end(),i)-v.begin();
            x=max(x,v[y]-i);
        }
    }
    cout<<x<<"\n";
    }
    return 0;
}