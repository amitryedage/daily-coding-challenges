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
        class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Initialize vector of size (rowIndex + 1) with all 1s
        vector<int> row(rowIndex + 1, 1);
        
        // Iterate through each row from 2 up to rowIndex
        for (int i = 2; i <= rowIndex; ++i) {
            // Update from right to left to use values from the previous state
            for (int j = i - 1; j > 0; --j) {
                row[j] = row[j] + row[j - 1];
            }
        }
        
        return row;
    }
};
    }
};