class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //Create the vector to store the ans 
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            // Create a new row of size i+1, initialized with 1
            vector<int> row(i + 1, 1);
            
            // Calculate middle elements (from index 1 to i-1)
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            triangle.push_back(row);
        }
        
        return triangle;
        
    }
};