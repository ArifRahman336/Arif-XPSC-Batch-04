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

    long long int sum=0,i=0,j=0,ans=0;
    while(j<x)
    {
        sum+=v[j];
        while(sum>=y)
        {
            sum-=v[i];
            ans+=x-j;
            i++;
        }
        j++;
    }
    cout<<ans<<"\n";
    return 0;
}