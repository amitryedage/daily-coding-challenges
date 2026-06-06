class Solution {
public:
    int countHousePlacements(int n) {
        //As the given condition 
        long long MOD = 1e9+7;
        long long prev2 = 2; //Reprsent the no way possible for n = 1 for one side of the road 
        long long prev1 = 3; //Reprsent the no way possible for n = 2 for one side of the road 
        //Base case 
        if(n == 1) return (prev2 * prev2) % MOD; //We can do same on the other side as well 
        if(n == 2) return (prev1 * prev1) % MOD; //We can do same on the other side as well 
        //Calculate for the one side then multiple on other side as well 
        long long one;
        for(int i = 3; i <= n ; ++i){
             one = (prev1+prev2)%MOD;
            prev2 = prev1;
            prev1 = one;
        }
        one = prev1; //Final answer get store in the prev1
        //Total no of possible ways 
        long long total_ways = (one*one)%MOD;
        return total_ways;
    }
};