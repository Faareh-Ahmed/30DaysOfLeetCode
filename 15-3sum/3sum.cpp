class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> result;
        
        // Sorting th Array to Utilize the Two Pointer technique
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            // Since the array os sorted, so if the first element is Positive >0 then we cant have triplets 
            // whose sum can  be 0
            if(nums[i]>0)
            {
                break;
            }
            
            // Condition to check the duplicates in index i
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }

            // Two Pointers: j starting from next index of i,k starting from last element index
            int j=i+1;
            int k=n-1;

            while(j<k)
            {
                // If the Values add upto 0 then push this pair into the Result
                // Initialze temp variables for j and k
                // Run the while loop to make sure the Values are not repeated in j and k 
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    
                    result.push_back({nums[i],nums[j],nums[k]});
                    int tempj=j;
                    int tempk=k;
                    while(j<k && nums[j]==nums[tempj])
                    {
                        j++;
                    }
                    while(j<k && nums[k]==nums[tempk])
                    {
                        k--;
                    }
                }

                // If their Sum add upto Greater than Zero then this means we have to move the 
                // k pointer backward because the Array was sorted so it might have large element
                if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }

                // If their Sum add upto Less than Zero then this means we have to move the 
                // j pointer forward because the Array was sorted so it might have Small element
                if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
            }
        }
        return result;
    }
};