class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

           map < int , int > mp;
           for( int i =0 ; i < nums.size() ; i++ ){
              
              mp[nums[i]] = i ;

           }
           vector < int > res;

           for( int i = 0; i < nums.size() ; i++ ){
               int d = target - nums[i];
               
               if( mp.find(d) != mp.end() && mp.find(d)->second != i ){
                    res.push_back(i);
                    res.push_back(mp.find(d)->second);
                    break;
               }
           }
           
        return res;
    }
};