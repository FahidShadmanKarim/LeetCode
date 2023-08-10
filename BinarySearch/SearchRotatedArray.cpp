class Solution {
public:

    int search(vector<int>& nums, int target) {
        
        int l = 0 , r = nums.size() - 1,index = -1;

        while( l < r - 1  ){
              
              int mid = l + ( r - l )/2;
              if( nums[mid] > nums[l] ){
                   l = mid;
              }
              else{
                  r = mid;
              }

              
        }

        int new_l=0, new_r=0;

        if( target >= nums[0] && target <= nums[l] ){
            new_l = 0 , new_r = l;
        }
        else if(target >= nums[r] && target <= nums[nums.size()-1]){
                new_l = r;
                new_r = nums.size()-1;
        }

        else{
            return -1;
        }

        l = new_l,r = new_r;

         while( l <= r ){
                 int mid = ( l + r )/2;

                 if( nums[mid] == target ){
                     return mid;
                 }
                 else if( nums[mid] <= target ){
                     l = mid + 1;
                 }
                 else{
                     r = mid  - 1;
                 }
             }

        
        
    

      return index;

    
  }
};