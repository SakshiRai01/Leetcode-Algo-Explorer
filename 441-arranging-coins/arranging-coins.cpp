class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0 , sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            sum += i;
            n -= sum;
            if(n >= 0)
            ans = i;
            sum = 0;
        }
        return ans;
    }
};