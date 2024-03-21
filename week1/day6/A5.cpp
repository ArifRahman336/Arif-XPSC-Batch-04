//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool allZero(map<char,int>& mp){
        for(auto i:mp){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	
	    int n=txt.size();
	    
	   map<char,int>mp;
	    
	    for(int i=0;i<pat.length();i++){
	        mp[pat[i]]++;
	    }
	    
	    int i=0,j=0,ans=0,k=pat.length();
	    while(j<n){
	        mp[txt[j]]--;
	        
	        if((j-i+1)==k){
	            if(allZero(mp)){
	                ans++;
	            }
	            mp[txt[i]]++;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends