class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
  int n = nums.size();
        sort(nums.begin(),nums.end());
        vector < vector < int >  >  res;

        for( int i = 0 ; i < n - 2 ; i++ ){


            int target = -nums[i];

            int l = i + 1 , r = n - 1;

            if( i == 0 || nums[i] != nums[i-1]){
            while( l < r ){

                int sum = nums[l] + nums[r];

                if(sum < target ){
                   l++;
                }
                else if( sum > target ){
                    r--;
                }
                else{

                  res.push_back({nums[i],nums[l],nums[r]});
                  while(l < r && (nums[l] == nums[l+1]))l++;
                  while(l < r && (nums[r] == nums[r-1]))r--;
                  l++,r--;
                }
            }
            }

        }
        
        return res;
     
    }
};