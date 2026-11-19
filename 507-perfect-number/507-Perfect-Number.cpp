class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        if(num == 1)
        return false;

        int n = num;
        int res = 0;
        for(int i = 1 ; i <= n/2 ; i++)
        {
            if(num % i == 0)
            res += i;
        }
        if(res == n)
        return true;
        else 
        return false;
    }
};