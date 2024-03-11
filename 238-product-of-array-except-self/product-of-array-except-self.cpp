class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int n = nums.size();
        int zerocount = 0;
        vector<int> newproduct;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zerocount++;
            }
            if (nums[i] != 0) {
                product *= nums[i];
            }
        }


        for (int i = 0; i < n; i++) {

            if(zerocount>1)
            {
                newproduct.push_back(0);
            }
            else if (nums[i] != 0 && zerocount < 1) {
                newproduct.push_back(product / nums[i]);
            }
            else if (nums[i] != 0 && zerocount >= 1) {
                newproduct.push_back(0);
            }
            else if (nums[i] == 0 && zerocount == 1) {
                newproduct.push_back(product);
            }

        }
        return newproduct;
    }
};