class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>freq;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            freq[nums[i]]+=1;
        }

        for(int i=0;i<n;i++)
        {
            if(freq[nums[i]]>1)
            {
                return true;
            }
        }

    return false;
    }
};