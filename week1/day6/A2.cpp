#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    vector<int>v1(x),v2(y);
    for(int i=0;i<x;i++){
        cin>>v1[i];
    }
    for(int i=0;i<y;i++){
        cin>>v2[i];
    }
    int i=0,j=0;
    while(i<x || j<y){
        if(i<x && j<y){
                if(v1[i]<v2[j]){
            cout<<v1[i]<<" ";
            i++;
        }
        else if(v1[i]>v2[j]) {
            cout<<v2[j]<<" ";
            j++;
        }
        else {
            cout<<v1[i]<<" "<<v2[j]<<" ";
            i++;
            j++;
        }
        }
       else if(i<x){
        cout<<v1[i]<<" ";
        i++;
       }
       else if(j<y){
        cout<<v2[j]<<" ";
        j++;
       }
    }
    return 0;
}