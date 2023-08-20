class Solution {
public:


    bool checkInclusion(string s1, string s2) {

    
       unordered_map < char , int > mp1,mp2;

       for( char c : s1 ){
           mp1[c]++;
       }

       int l = 0 , r = 0 ;
       while( r < s2.size() ){

           mp2[s2[r]]++;
           
           if( r - l + 1 == s1.size() ){
               int flag = 0;
               for( char c = 'a' ; c <= 'z' ; c++ ){
                   if(mp1[c] != mp2[c]){
                      flag = 1;
                   }
               }
               if(!flag)return true;
           }
           if( r - l + 1 < s1.size() )r++;

           else{
               mp2[s2[l]]--;
               l++;
               r++;
           }

       }

       return false;

    }
};