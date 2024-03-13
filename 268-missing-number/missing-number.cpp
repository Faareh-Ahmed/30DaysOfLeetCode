class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();



        // By SUM OF N NATURAL NUMBERS:

        int sumofnatural=0;
        int sumofarray=0;

        for(int i=0;i<n;i++)
        {
            sumofarray+=nums[i];
        }

        sumofnatural=n*(n+1)/2;
        
        return sumofnatural-sumofarray;

    }
};