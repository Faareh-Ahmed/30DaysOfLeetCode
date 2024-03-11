class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N =nums.size();
        int result=nums[0];
        // Since we have to find the element that occured single time and all the other
        // elements have occured twice so taking the Bitwise XOR will give us the solution
       
       for(int i=1;i<N;i++)
       {
           result=result^nums[i];
       }
        return result;
    }
};