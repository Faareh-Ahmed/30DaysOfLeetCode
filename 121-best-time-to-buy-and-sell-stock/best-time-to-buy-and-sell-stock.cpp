class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int n=prices.size();

        //start pointers: i = Buy Pointer, j = Sell Pointer
        int i=0;
        int j=i+1;

        while(j<n)
        {
            // If the current difference bwtween Sell and Buy is > Profit, then Update Profit
            if(prices[j]-prices[i]>profit)
            {
                profit=prices[j]-prices[i];
            }

            // If the Sell price is Greater than Buy price, then move the Sell pointer 1 forward
            // Else Means that Buy price is Greater than Sell Price, So move the Buy pointer 1 forward
            if(prices[j]>prices[i])
            {
                j++;
            }else{
                i++;

                // Check if the Buy and Sell Pointer at same index then move the Sell pointer also
                // Because we must sell at a day greater than Buy day
                if(i==j)
                {
                    j++;
                }
            }
        }

        return profit;
    }
};