class Solution {
public:

   

    string longestPalindrome(string s) {
        
        //for odd length
        int n = s.size();
        int mx = 0;
        int st,en;
        int li = -1 , ri = -1;
        for( int i = 0 ; i < n ; i++ ){
            
            int l = i , r = i;
            while( l >= 0 && r < n && s[l] == s[r] ){

                if( r - l + 1 > mx ){
                mx = r - l + 1;
                li = l;
                ri = r;
            }
                 l--;
                 r++;
            }
            l = i , r = i + 1;
            while( l >= 0 && r < n && s[l] == s[r] ){

                if( r - l + 1 > mx ){
                    mx = r - l + 1;
                    li = l;
                    ri = r;
                 }
                 l--;
                 r++;
            }   
        }
       
    
        return s.substr(li,mx);
        
    }
};