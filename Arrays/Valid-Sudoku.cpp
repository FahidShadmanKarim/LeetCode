class Solution {
public:
    
 

    bool isValidSudoku(vector<vector<char>>& board) {
        
        for( int i = 0 ; i < 9 ; i++ ){
            set < char > rows;
            for( int j = 0 ; j < 9 ; j++ ){
                char c = board[i][j];
                if( c != '.' && rows.find(c) != rows.end()){
                    return false;
                }
              
                    rows.insert(c);
                
            }
        }

        for( int j = 0 ; j <  9 ; j++ ){
            set < char > columns;
            for( int i = 0 ; i < 9 ; i++ ){
                char c = board[i][j];
                if( c != '.' &&  columns.find(c) != columns.end()){
                    return false;
                }
              
                    columns.insert(c);
                
            }
        }

        vector < set < int > > box(9);

        for( int i = 0 ; i < 9 ; i++ ){
            for( int j = 0 ; j < 9 ; j++ ){
                int b = (i/3)* 3 + ( j / 3 );

                if( board[i][j] != '.' && box[b].find(board[i][j]) != box[b].end() ){
                    return false;
                }
                box[b].insert(board[i][j]);

             }
        }



       

        return true;
        
    }
};