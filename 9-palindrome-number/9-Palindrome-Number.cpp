class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;

        long a = 0;
        int b = x;

        while(x > 0)
        {
            a = (a * 10) + (x % 10);
            x /= 10;
        }
        return b == a;
    }
};