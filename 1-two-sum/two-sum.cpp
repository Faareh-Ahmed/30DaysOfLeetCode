class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> conjugate;
        vector<int>result;

        for(int i=0;i<nums.size();i++)
        {
            if(conjugate.count(nums[i])>0)
            {
                result.push_back(i);
                result.push_back(conjugate[nums[i]]);
                break;
            }else{
                conjugate[target-nums[i]]=i;
            }
        }

        return result;
    }
};