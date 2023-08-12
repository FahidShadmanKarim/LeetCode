class Solution {


int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

public:
    
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

         int row = mat.size();
        int column = mat[0].size();
        int x = 0 ,y = 0;

         vector<vector<int>> dist(row,vector<int>(column,0));
         vector<vector<int>> visited(row,vector<int>(column,0));

         queue < int > q;


        bool flag = false;
        for( int i = 0 ; i < row ; i++ ){
            for( int j = 0 ; j < column ; j++ ){
                visited[i][j] = false;
                dist[i][j] = 0;
                if(mat[i][j] == 0){
                  q.push(i);
                  q.push(j);
                  visited[i][j] = true;
                }
            }

        }






        while(!q.empty()){

            int ux = q.front();q.pop();
            int uy = q.front();q.pop();

            for( int i = 0 ; i < 4 ; i++ ){

                  int vx = ux + dx[i];
                  int vy = uy + dy[i];

                  if(vx >= 0 && vx < row && vy >= 0 && vy < column ){
                        if(!visited[vx][vy]){
                         visited[vx][vy] = true;
                         q.push(vx);
                         q.push(vy);


                        dist[vx][vy] = dist[ux][uy] + 1;


                        }

                  }
            }

        }

        for( int i = 0 ; i < row ; i++ ){
            for( int j = 0 ; j < column ; j++ ){
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }







      
        return dist;

    }
        
    
};