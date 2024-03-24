#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]=='G' && s2[i]=='B') s1[i]='B';
            if(s1[i]=='B' && s2[i]=='G') s1[i]='G';
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]) x=1;
        }
        if(x==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}