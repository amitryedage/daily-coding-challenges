class Solution {
public:
    int climbStairs(int n) {
        //Create the vector store at each stage no of possible way 
        vector<int> dp(n+1,0); //n+1 = last stage 0 = at each stage possible way climb
        dp[0]=1;
        dp[1]=1;
        for(int i = 2; i <= n ; i++)
         dp[i]=dp[i-1]+dp[i-2];
    return dp[n];
        
    }
};