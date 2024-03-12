class Solution {
public:
    bool isPalindrome(int x) {
        
        string palindrome=to_string(x);

        int i=0;
        int j=palindrome.length()-1;

        while(i<j)
        {
            if(palindrome[i]==palindrome[j])
            {
                i++;
                j--;
            }else{
                return false;
            }
        }


        return true;

    }
};