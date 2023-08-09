class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        for( int i = 0 ; s[i] ; i++ ){
            if( s[i] >= 'A' && s[i] <= 'Z')s[i] = tolower(s[i]);
            if( s[i] >= 'a' && s[i] <= 'z')temp += s[i];
            if( s[i] >= '0' && s[i] <= '9')temp+=s[i];
        }
        s = temp;
        reverse(s.begin(),s.end());
        if( temp == s){
            return true;
        }
        else{
            return false;
        }
    }
};