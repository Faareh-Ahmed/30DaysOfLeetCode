class Solution {
public:
    bool isPerfectSquare(int num) {
        
       int low=0;
       int high=num;
       long long mid= low + (high - low) / 2;
       if(num==1)
       {
        return true;
       }

       while(low<=high)
       {
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid < num)
            {
                low=mid+1;
                mid= (low+high)/2;
            }
            else if(mid*mid > num)
            {
                high=mid-1;
                mid= (low+high)/2;
            }
       }

       return false;
    

    }
};