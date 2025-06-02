class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestPrice =  prices[0];
        for(int i = 1;i<prices.size();i++){
            if(prices[i]>bestPrice){
                maxProfit = max(maxProfit,prices[i]-bestPrice);
            }
            bestPrice = min(bestPrice,prices[i]);
        }
        return maxProfit;
        
    }
};