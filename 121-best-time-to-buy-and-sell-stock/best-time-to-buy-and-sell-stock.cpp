class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum=prices[0];
        int profit=0;
        int current;
        int n=prices.size();

        for(int i=0;i<n;i++)
        {
            current=prices[i];
            if(current-minimum>profit)
            {
                profit=current-minimum;
            }
            if(current<minimum)
            {
                minimum=current;
            }
        }

        return profit;
    }
};