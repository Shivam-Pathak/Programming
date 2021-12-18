//Shivam Pathak
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        int n=abs(x),y=x;
        int rev = 0, remainder;
        while (x != 0) 
        {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        if(y==rev)
            return true;
        else
            return false;
        
        
    }
};