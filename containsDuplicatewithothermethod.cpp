class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //solve with the help of heap time complexity o(n)
        //edge case 
        int n = nums.size();
        if(n == 0 ) return false;
        //create the hase set 
        std::unordered_set<int> saw;
        for(int num : nums){
            if(saw.find(num) != saw.end()){
                return true;
            }
            saw.insert(num);
        }
        
        return false;
    }
};