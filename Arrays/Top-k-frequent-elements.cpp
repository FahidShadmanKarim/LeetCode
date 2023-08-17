class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map < int , int > mp;
        priority_queue < pair < int , int > > pq;

        for( int i = 0 ; i < nums.size() ; i++ ){
            mp[nums[i]]++;
        }
        for( auto it = mp.begin() ; it != mp.end() ; it++ ){
            int num = it->first;
            int freq = it->second;
            pq.push({freq,num});
        }
        int cnt = 0 ;
        vector < int > res;

        while( cnt < k ){
             res.push_back(pq.top().second);
             pq.pop();
             cnt++;
        }

        return res;



        
    }
};