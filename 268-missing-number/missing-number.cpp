class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        // bool *findnumber=new bool[n+1];
        // bool found=false;

        // for (int i = 0; i < n; ++i)
        // {
        //     findnumber[i] = false;
        // }

        // for(int i=0;i<n;i++)
        // {
        //     findnumber[nums[i]]=true;
        // }

        // for (int i = 0; i < n; ++i)
        // {
        //     if(findnumber[i]==false)
        //     {
        //         found=true;
        //         return i;
        //     }
        // }

        // if(found==false)
        // {
        //     return n;
        // }

        // return n;

        int arrayxor=nums[0];

        for(int i=1;i<n;i++)
        {
            arrayxor^=nums[i];
        }

        cout<<"arrayxor: "<<arrayxor<<endl;

        int naturalxor=0;

        for(int i=1;i<=n;i++)
        {
            naturalxor^=i;
        }

        cout<<"naturalxor: "<<naturalxor<<endl;
        
        
        return naturalxor^arrayxor;

    }
};