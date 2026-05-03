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