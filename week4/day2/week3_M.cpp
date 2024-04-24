#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        char c1,c2;
        int a1=0,a2=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='X') c1=s1[i];
            else a1++;
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]!='X') c2=s2[i];
            else a2++;
        }
        if(c1==c2){
            if(a1==a2 || c1=='M'){
                cout<<"="<<'\n';
                continue;
            }
            if(c1=='S'){
                if(a1>a2) cout<<"<"<<"\n";
                else cout<<">"<<"\n"; 
            }
            else if(c1=='L'){
                if(a1>a2) cout<<">"<<"\n";
                else cout<<"<"<<"\n";
            }
            continue;
        }
        if(c1=='S') cout<<"<"<<"\n";
        else if(c1=='M' && c2=='S') cout<<">"<<"\n";
        else if(c1=='M' && c2=='L') cout<<"<"<<"\n";
        else if(c1=='L') cout<<">"<<"\n";
    }
    return 0;
}