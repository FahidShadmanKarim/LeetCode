class Solution {
public:
    int characterReplacement(string s, int k) {
          
         map < int , int > mp;

         int l = 0 , r = 0;

         int ans = 0 , mx_freq = 0;

        while( r < s.size() ){
            mp[s[r]]++;

            mx_freq = max( mx_freq , mp[s[r]]);

            if( r - l + 1 - mx_freq > k ){
                mp[s[l]]--;
                l++;
            }
            ans = max( ans , r - l + 1 );
            r++;
        } 
         
        
        return ans;
    }
};