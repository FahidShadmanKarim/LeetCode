class Solution {
public:

    vector<int> dailyTemperatures(vector<int>& temperatures) {

       int n = temperatures.size();
       stack < pair < int , int > > st;
       vector < int > res(n);

       for( int i = 0 ; i < n ; i++ ){
             
             int currentDay = i;
             int currentTemp = temperatures[i];

             while(!st.empty() && st.top().second < currentTemp ){

                  int prevDay = st.top().first;
                  int prevTemp = st.top().second;
                  st.pop();

                  res[prevDay] = currentDay - prevDay;

             }
             st.push({currentDay,currentTemp});
       }

         

          return res;
    

    }
};