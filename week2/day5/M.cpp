#include<bits/stdc++.h>
using namespace std;

int sln(vector<int>&v){
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j){
        if(v[i]!=v[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int i=0,j=n-1;
        int ans=-1;
        int a,b;
        while(i<j){
            if(v[i]!=v[j]){
                ans=1;
                a=v[i];
                b=v[j];
                break;
            }
            i++;
            j--;
        }
        if(ans==-1) cout<<"YES"<<"\n";
        else{
            vector<int>v1,v2;
            for(int i=0;i<n;i++){
                if(v[i]==a) continue;
                v1.push_back(v[i]);
            }
             for(int i=0;i<n;i++){
                if(v[i]==b) continue;
                v2.push_back(v[i]);
            }
            int ans1=sln(v1);
            int ans2=sln(v2);
            if(ans1==1 || ans2==1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}