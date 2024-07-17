class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0], cost=0, profit=0, n=prices.size();
        for(int i=0;i<n;i++){
            cost = prices[i]-mini;
            profit = max(profit, cost);
            mini =
        }
    }
};
