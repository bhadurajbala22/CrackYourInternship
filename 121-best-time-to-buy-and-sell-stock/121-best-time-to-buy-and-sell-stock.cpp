class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int max_profit=0;
        int profit=0;
        int min=INT_MAX;
        
        
        for(int i=0;i<n;i++)
        {
            //for finding the minimum value 
            
            if(min>prices[i])
            {
                min=prices[i];
                
            }
            //check profit 
            profit=prices[i]-min;
            
            //check if profit is greater then maximum profit or not
            if(max_profit<profit)
            {
                max_profit=profit;
            }
        }
        return max_profit;
    }
};