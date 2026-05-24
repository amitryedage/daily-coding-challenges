class Solution {
public:
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        sort(intervals.begin(),intervals.end());
        //create the vector to store the final merged intervals
        vector<vector<int>> merged;
        //Traverse the intervals
        for(auto interval : intervals){
            //Check the merge interval is empty or current interval is not overlaping with other 
            if(merged.empty() || merged.back()[1] < interval[0]){

                merged.push_back(interval);
            }
            else{
               
                merged.back()[1] = max ( merged.back()[1] , interval[1]);

            }
        }
       return merged; 
    }
};