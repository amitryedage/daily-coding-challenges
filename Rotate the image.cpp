class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Rotate the image 
        //n is the size of the matrix (n = no of row = no of column)
        int n = matrix.size();

        for (int i = 0 ; i < n ; ++i){
            for(int j = i ; j < n ; ++j){
                //swap the element at (i,j) , (j,i) to rotate the image 
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reverse the matrix
        for( int i = 0 ; i < n ; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};