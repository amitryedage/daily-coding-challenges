class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;

        int profit = 0 ;

        for(int price : prices){
            //Check current price less then minprice if yes then update the minprice
            if(minprice > price){
                minprice = price;
            }
            else{
                profit = max(profit , price-minprice);
            }
        }
        return profit;
    }
};