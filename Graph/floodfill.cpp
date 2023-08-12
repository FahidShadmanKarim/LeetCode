class Solution {

    bool visited[51][51];
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

public:
    
    
   
    void dfs( vector<vector<int>>& image, int x , int y ,int row,int column, int c , int col){

        

         if(x<0 || x>=row || y<0 || y >=column || visited[x][y]){
            return;
        }
        else if(image[x][y]!= c){
            return;
        }

         image[x][y] = col;
         visited[x][y] = true; 
    

        for( int i = 0 ; i < 4 ; i++ ){
            int xx = x + dx[i];
            int yy = y + dy[i];

            dfs(image,xx,yy,row,column,c,col);
          
        }

    
        


        
         
         

    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         
         int row = image.size();
         int column = image[0].size();



         for( int i = 0 ; i < row ; i++ ){
             for( int j = 0 ; j < column ; j++ ){
                 visited[i][j] = false;
             }
         }

         int c = image[sr][sc];

         dfs( image,sr,sc,row,column,c,color);



         return image;



    }
};