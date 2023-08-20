class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // profit = sp - cp
        // 7 2 1 5 3 6 4

        int cp = prices[0];
        int n = prices.size();
        int ans = 0;

        for( int i = 1 ; i < n  ; i++ ){
             
             int profit = prices[i] - cp;

             if( profit < 0 ){
                 cp = prices[i];
             }
             
             ans = max( profit , ans);

            
        }

       return ans;
        
    }
};