#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(auto c:s){
                if(c=='D'){
                    vec[i]++;
                    if(vec[i]==10) vec[i]=0;
                }
                else{
                    vec[i]--;
                    if(vec[i]==-1) vec[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}