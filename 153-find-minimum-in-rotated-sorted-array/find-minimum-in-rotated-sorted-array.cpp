class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;
        int mid = start + (end - start) / 2; 

        if (nums.size() == 1) {
            return nums[0];
        }
        if (nums.size() == 2) {
            return min(nums[0], nums[1]);
        }

        while(start<end)
        {
            if (nums[start]<nums[end])
            {
                return nums[start];
            }
            else if(nums[end]<nums[mid])
            {
                // search in right half
                start=mid+1;
                mid = start + (end - start) / 2; 
            }
            else if(nums[end]>nums[mid])
            {
                // search in left half
                end=mid;
                mid = start + (end - start) / 2; 
            }
        }

        return nums[mid];

    }
};