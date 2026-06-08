class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //Find the the size of the give array 
        int n = nums.size();
        //Fint the total number of possible subset 
        int subset = 1 << n;
        vector<vector<int>> result;
        for(int i = 0 ; i < subset; ++i){
            //Create the another vector to keep track of the current subset 
            vector<int> current;
            for(int j = 0 ; j < n; ++j){
                if((i & (1<<j)) != 0){
                    current.push_back(nums[j]);
                }
            }
            result.push_back(current);

        }
        return result;
        
    }
};