class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int minPrice = INT_MAX;
        
        for(int i = 0;i<=prices.size()-1;i++){
            
            maxPrice = max(maxPrice, prices[i]-minPrice);
            
            minPrice = min(minPrice,prices[i]);
            
        }
        
        return maxPrice;
    }
};
