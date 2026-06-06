class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        //Find the size of the price vector 
        int n = prices.size();
        //base case 
        if(k == 0 || n == 0) return 0;
        //If k value is too large 
        int max_profit = 0;
        if(k >= n/2){
            for(int i = 1 ; i < n ; i++){
                
                if(prices[i] > prices[i-1]){
                    max_profit +=prices[i]-prices[i-1];
                }
            }
            return max_profit;
        }
        //Create two different vector to keep track of buy and sell record on different days
        vector<int> buy(k+1,INT_MIN);
        vector<int> sell(k+1,0);
        for(int price : prices){
            for(int j = 1 ; j <= k ; j++){
                buy[j] = max(buy[j],sell[j-1]-price);
                sell[j]=max(sell[j],buy[j]+price);
            }
        }
        return sell[k];
        
    }
};