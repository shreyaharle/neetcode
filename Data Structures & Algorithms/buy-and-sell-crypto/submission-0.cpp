class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxp = 0;
        for (int i=0;i<prices.size();i++){
            int profit = prices[i] - minprice;
            maxp = max(profit, maxp);
            minprice = min(minprice,prices[i]);
        }
        return maxp;
        
    }
};
