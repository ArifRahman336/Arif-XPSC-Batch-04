#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v(n);
        map<string,bool>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=true;
        }
        for(int j=0;j<n;j++){
            bool flag=false;
            for(int i=1;i<v[j].size();i++){
                string s1=v[j].substr(0,i);
                string s2=v[j].substr(i,v[j].size()-1);
                if(mp[s1] && mp[s2]){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<"1";
            else cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}