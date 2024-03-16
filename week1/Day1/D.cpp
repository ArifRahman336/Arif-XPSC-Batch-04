#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    if(s.size()<4){
        for(int i=1;i<=4-s.size();i++){
            cout<<"0";
        }
        cout<<s<<"\n";
    }
    else cout<<s<<"\n";
    return 0;
}