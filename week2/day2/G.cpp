#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        mp.insert({'T',1});
        mp.insert({'i',1});
        mp.insert({'m',1});
        mp.insert({'u',1});
        mp.insert({'r',1});
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
        }
        int x=0;
        for(auto m:mp){
            if(m.second>0 || m.second<0){
                x=1;
            }
        }
        if(x==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}