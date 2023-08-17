class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector < int > pre( nums.size() );
        vector < int > suff( nums.size() );

        pre[0] = nums[0];
        for( int i = 1 ; i < nums.size() ; i++ ){
            pre[i] = pre[i-1] * nums[i];
        }
        suff[nums.size()-1] = nums[nums.size()-1];

        for( int i = nums.size()-2 ; i >= 0 ; i-- ){
            suff[i] = suff[i+1]*nums[i];
        }

        vector < int > res;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( i == 0 )res.push_back(suff[1]);
            else if ( i == nums.size()-1)res.push_back(pre[nums.size()-2]);
            else res.push_back(pre[i-1]*suff[i+1]);
        }

        return res;
        
    }
};