#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int>mp;
        vector<string>v[3];
        for(int i=0;i<3;i++){
            v[i].resize(n);
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                mp[v[i][j]]++;
            }
        }
        int x[3]={0};
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                if(mp[v[i][j]]==1){
                    x[i]+=3;
                }
                else if(mp[v[i][j]]==2){
                    x[i]+=1;
                }
            }
        }
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<"\n";
    }
    return 0;
}