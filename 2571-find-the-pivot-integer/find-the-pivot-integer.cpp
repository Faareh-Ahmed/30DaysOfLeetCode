class Solution {
public:
    int pivotInteger(int n) {
        
    int i=1;
    int j=n;
    int startsum=i;
    int endsum=j;

    while(i<j)
    {
        if(startsum<endsum)
        {
            i++;
            startsum+=i;
        }
        else if(startsum>endsum)
        {
            j--;
            endsum+=j;
        }
        else if(startsum==endsum)
        {
            i++;
            j--;
            startsum+=i;
            endsum+=j;
        }

    }

        if(startsum==endsum)
        {
            return i;
        }else{
            return -1;
        }

        return -1;
    }
};