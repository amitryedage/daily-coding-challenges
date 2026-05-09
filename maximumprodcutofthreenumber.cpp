class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();

        //sort the array 
        sort(nums.begin(),nums.end());
       //Product of the three largest numbers
        long long ans1 = (long long) nums[n-1] * nums[n-2] * nums[n-3];
//Product of the two smallest numbers and the largest number
        long long ans2 = (long long) nums[0] * nums[1] * nums[n-1];

        return max(ans1 , ans2);
        
    }
};