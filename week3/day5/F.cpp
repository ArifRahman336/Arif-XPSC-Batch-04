#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,i,j,ans;
        cin>>n;
        string s;
        cin>>s;
        ll ch[n];
        ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L') ans=ans+i;
            else ans=ans+n-i-1;

            if(s[i]=='L') ch[i]=n-i-1-i;
            else ch[i]=i-(n-i-1);
        }
        sort(ch,ch+n);
        reverse(ch,ch+n);
        for(i=0;i<n;i++){
            if(ch[i]>0) ans=ans+ch[i];
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}