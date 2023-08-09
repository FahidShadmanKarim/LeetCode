class Solution {
public:
    int longestPalindrome(string s) {
        
       
       map < char , int > mp;
      
        for( auto c : s ){
            mp[c]++;
        }
        
        int res = 0,carry = 0;
        for( auto c : mp ){
           
                if( c.second %2 == 1 ){
                    carry = 1;
                    res += ( c.second - 1 );
                }
            else{
                res += c.second;
            }
            
            }
        
           
            
        
        
       
        return res + carry;
        
      
        
        
        
    }
};