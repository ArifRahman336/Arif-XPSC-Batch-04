#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt[26]={0};
    for(int i=0;i<s.size();i++){
        int value=s[i]-'a';
        cnt[value]++;
    }
    int x=0;
    int y;
    for(int i=0;i<26;i++){
        if(cnt[i]==0){
            x=1;
            y=i+'a';
            break;
        } 
    }
    if(x==1) cout<<char(y);
    else cout<<"None";
    return 0;
}