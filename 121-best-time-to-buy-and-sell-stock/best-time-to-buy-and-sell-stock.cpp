class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = -1;
        int brr[n];
        brr[n-1] = prices[n-1];
        for(int i=n-1;i>=1;i--){
            if(prices[i]>max){
                brr[i-1] = prices[i];
                max = prices[i];
            }
            else brr[i-1] = max;
        }
        int profit = 0;
        for(int i=0;i<n;i++){
            if(profit<(brr[i]-prices[i])) profit = (brr[i]-prices[i]); 
        }
        return profit;
    }
};