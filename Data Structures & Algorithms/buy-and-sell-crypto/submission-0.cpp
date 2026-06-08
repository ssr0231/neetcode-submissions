class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int profit=0;
                if(prices[i]<prices[j]){
                    profit=prices[j]-prices[i];
                }
                max_profit=max(max_profit,profit);
            }
        }
        return max_profit;
    }
};
