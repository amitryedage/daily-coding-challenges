class Solution {
public:
    // function to merge two sorted array 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // i element point to last time from the array 1 
        int i = m - 1 ;
        //j element point to last element from the array 2 
        int j = n-1; 

        //k element point to last element from array 1 (include 0 after the array element from the array 1)

        int k = m + n - 1;

        //fill the element at the end of the array 1 by comparing last element from array 1 and array 2 
        while( i >= 0 && j >= 0){
            // check which element is greater by comparing both element array
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        //If any element is remaining from the array 2 add that in array 1 as they are already sorted 
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }
        
    }
};