// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

         int l = 1 , r = n;
         int index = 0;
         while( l <= r){
              
              int mid = l + ( r - l )/2;

              if( isBadVersion(mid) == true ){

                   index = mid;
                   r = mid - 1;
                   cout << index << endl;
                
              }
              else if(isBadVersion(mid) == false){
                  l = mid + 1;
              }
               
         }

         return index;
        
    }
};