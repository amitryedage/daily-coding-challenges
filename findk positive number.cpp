class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //Create two pointer to travrese the array by both side 
        int low = 0 ;
        int high = arr.size()-1;

        while(low <= high){
            int mid = (low+high)/2;

            //Calculate the how many number are middle still mid
            int missing =arr[mid] - (mid+1);
            if(missing < k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
       return k+high+1; 
    }
};