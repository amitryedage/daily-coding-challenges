class Solution {
private:
int sum(vector<int> &nums , int div){
    int sum = 0 ;
    for(int num : nums){
        sum += ceil((double) num / div);
    }
    return sum;
}
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        //Base case 
        if(nums.size() > threshold) return -1;
        int low = 1;
        int high = *max_element(nums.begin() , nums.end());

        //Binary serach to find the smallest divisor 

        while(low <= high){
            int mid = (low+high) / 2;

            if(sum(nums,mid) <= threshold){
                high = mid - 1; 

            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};