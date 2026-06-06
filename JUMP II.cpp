class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        //Base case if array has only one element then we alreday reach to last index element 
        if(n <=1) return 0;

        int jumps = 0;
        int fartest = 0;
        int current_end = 0;
        for(int i = 0 ; i < n ; i++){
            fartest=max(fartest,i+nums[i]);

            if(i == current_end){
                jumps++;
                current_end = fartest;

                if(current_end >= n-1) break;
            }
        }
        return jumps;
    }
};