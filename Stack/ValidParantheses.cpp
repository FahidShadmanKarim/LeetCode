class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        
        vector < vector < int > > res;
        int j = 0 ;
        
        vector < vector < int > > v;


        for( int i = 0 ; i < interval.size() ; i++ ){

              if(newInterval[1] < interval[i][0] || newInterval[0]  > interval[i][1]){
                  v.push_back(interval[i]);
              }
              else{
                   newInterval[0] = min( newInterval[0] , interval[i][0]);
                   newInterval[1] = max( newInterval[1] , interval[i][1]);

              }


        }
        v.push_back(newInterval);

        sort(v.begin(),v.end());
        
        return v;

       
     
        
    }
};