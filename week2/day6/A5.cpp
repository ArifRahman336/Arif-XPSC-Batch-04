#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,y;
    cin>>x>>y;
    vector<long long int>v(x);
    for(long long int i=0; i<x; i++)
    {
        cin>>v[i];
    }

    map<long long int,long long int> mp;
    long long int cnt=0,ans=0,l=0,r=0;
    for(long long int i=0; i<x; i++)
    {
        if(mp[v[i]]==0)
        {
            cnt++;
        }
        mp[v[i]]++;

        while(cnt>y)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0)
            {
                cnt--;
            }
            l++;
        }
        ans+=i-l+1;
    }
    cout<<ans;
    return 0;
}