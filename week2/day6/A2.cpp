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
    long long int sum=0,i=0,j=0,ans=__LONG_LONG_MAX__;
    bool flag=false;
    while(j<x)
    {
        sum+=v[j];
        if(sum>=y)
        {
            ans=min(ans,j-i+1);
            while(sum>=y && i<j)
            {
                sum-=v[i];
                i++;
                if(sum>=y)
                {
                    ans=min(ans,j-i+1);
                    flag=true;
                }
            }
        }
        j++;
    }
    if(ans==__LONG_LONG_MAX__) cout<<-1;
    else cout<<ans;
    return 0;
}