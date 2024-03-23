#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<string>v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        int ans=INT_MAX,sum;
        for(int i=0;i<a-1;i++){
            for(int j=i+1;j<a;j++){
                sum=0;
               for(int k=0;k<b;k++){
                sum+=abs(v[i][k]-v[j][k]);
               }
               if(ans>sum) ans=sum;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
