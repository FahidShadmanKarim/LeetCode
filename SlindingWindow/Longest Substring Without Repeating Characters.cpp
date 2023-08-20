class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         
         // abcabcbb
         map < int , int > mp;
         
         int l = 0 , r = 0 ;
         int mx = 0;
         
         while( r < s.size() ){
               
               mp[s[r]]++;
               while( mp[s[r]] > 1 ){
                    mp[s[l]]--;
                    l++;
               }

               mx = max( mx , r - l + 1 );

         }



         return mx;
         



    }
};