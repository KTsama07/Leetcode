class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //int col[0] ={0} -> matrix[0][..]
        //int row[0] = {0} -> matrix[..][0]
        int m =matrix.size(); //rows
        int n =matrix[0].size(); //columns
        int col0 = 1;
        for(int i = 0 ; i< m ; i++){
            for(int j = 0; j<n ; j++){
                if(matrix[i][j] == 0){
                    //mark the i-th row
                    matrix[i][0]=0;
                    //mark the j-th col;
                    if( j != 0)
                        matrix[0][j]=0;
                    else 
                        col0 = 0;
                }
            }
        }
        //start traversal from back of the matrix
        for(int i = m-1 ; i > 0 ; i--){
            for(int j = n-1; j > 0; j--){
                if(matrix[i][j] != 0){
                    //check if the row[0][..] or col[..][0] is = 0 or not
                    if(matrix[0][j] == 0 || matrix[i][0]==0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if( matrix[0][0] == 0){
            for(int j = 0 ; j < n; j++){ matrix[0][j] = 0;}
        }
        if( col0 == 0){ 
            for(int i = 0; i< m ; i++){ matrix[i][0] = 0 ;}
        }
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna