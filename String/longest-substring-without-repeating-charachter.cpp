class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         
        
          int l = 0 ;
          map < char , int > mp;
          
          int mx = 0 ;
          
          for( int r = 0 ; r < s.size() ; r++ ){
               
               mp[s[r]]++;
               while( mp[s[r]] > 1  ){
                   mp[s[l]]--;
                   l++;
               }
              mx = max( mx , r - l + 1 );
              
          }
        
        return mx;
    }
};