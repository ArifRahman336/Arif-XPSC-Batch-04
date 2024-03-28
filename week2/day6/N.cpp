#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto i:mp)
        {
            if(i.second%2!=0) cnt++;
        }
        if(b>=a) cout<<"YES"<<"\n";
        else if(b>=cnt-1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n"; 
    }
    return 0;
}