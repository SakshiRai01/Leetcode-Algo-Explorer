class Solution {
public:
    string convertToBase7(int num) 
    {
       int ans = 0;
       int i = 0;

    while (num != 0)
    {
        int rem = num % 7;
        ans = ans + rem * pow(10, i);
        i++;
        num = num / 7;
    }
    string Ans;
    Ans = to_string(ans);
    return Ans; 
    }
};