class Solution {
public:

    int maximumOf(int a, int b)
    {
        return (a>=b?a:b);
    }

    int minimumOf(int a,int b)
    {
        return (a<=b?a:b);
    }

    void swap(int &a, int &b)
    {
        int x=a;
        a=b;
        b=x;
    }

    int maxProduct(vector<int>& nums) {
       
       int max=nums[0];
       int min=nums[0];
       int result=nums[0];

       for(int i=1;i<nums.size();i++)
       {
           if(nums[i]<0)
           {
               swap(max,min);
           }

           max=maximumOf(nums[i], max*nums[i]);
           min=minimumOf(nums[i],min*nums[i]);
           result=maximumOf(result,max);
       }



        return result;


    
    }
};