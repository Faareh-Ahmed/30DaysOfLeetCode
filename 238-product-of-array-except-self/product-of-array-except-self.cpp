class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int n = nums.size();
        // Count the number of zeroes in the array
        int zerocount = 0;
        // vector to store the results
        vector<int> newproduct;

        // Loop that counts the Number of Zeroes and also finds the Total product of all non zero
        // elements in the array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zerocount++;
            }
            if (nums[i] != 0) {
                product *= nums[i];
            }
        }


        for (int i = 0; i < n; i++) {
            
            // If there are more than 1 zero elements then simply push 0 in resultant array
            if(zerocount>1)
            {
                newproduct.push_back(0);
            }

            // For non zero element, push back the product/element
            else if (nums[i] != 0 && zerocount < 1) {
                newproduct.push_back(product / nums[i]);
            }
            else if (nums[i] != 0 && zerocount >= 1) {
                newproduct.push_back(0);
            }
            // If the element is the only single Zero element then push the Product found
            else if (nums[i] == 0 && zerocount == 1) {
                newproduct.push_back(product);
            }

        }
        return newproduct;
    }
};