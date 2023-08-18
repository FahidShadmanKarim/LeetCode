class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        for( int i = 0 ; s[i] ; i++ ){
            if( s[i] >= 'A' && s[i] <= 'Z')s[i] = tolower(s[i]);
            if( s[i] >= 'a' && s[i] <= 'z')temp += s[i];
            if( s[i] >= '0' && s[i] <= '9')temp+=s[i];
        }

        cout << temp << endl;

        

        if( temp.size() % 2 == 1 ){

             int l = temp.size()/2 , r = l;
             while( l >=0 && r < temp.size()){
                 if( temp[l] == temp[r] ){
                     l--;r++;
                 }
                 else{
                     return false;
                 }
             }

        }
        else{

            int sz = temp.size()-1;
            int l = sz/2;int r = l + 1;
            while( l >= 0 && r < temp.size() ){
                 if( temp[l] == temp[r] ){
                     l--;r++;
                 }
                 else{
                     return false;
                 }
            }
        }


        return true;

      
      
        

       
    }

};