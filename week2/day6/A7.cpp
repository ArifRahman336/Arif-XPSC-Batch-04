class Solution{
  public:
    int longestKSubstr(string s, int k) {
   map<char,int>mp;
   int cnt=0,i=0,j=0,ans=0,n=s.size();
   while(j<n)
   {
       while(j<n)
       {
           if(mp[s[j]]==0)
               cnt++;
           mp[s[j]]++;
           if(cnt>k)
           break;
           j++;
       }
       if(cnt>=k)
       ans=max(ans,j-i);
       if(j==n)
       break;
       while(i<n)
       {
           if(mp[s[i]]==1)
           cnt--;
           mp[s[i]]--;
           if(cnt==k)
           break;
           i++;
       }
       i++;
       j++;
   }
   if(ans==0)
   return -1;
   return ans;
   
 
    }
};