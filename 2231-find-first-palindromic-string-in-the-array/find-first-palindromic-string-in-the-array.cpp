class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0 , j = s.length() - 1;
        while(i < j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) 
    {
        for(string str : words)
        {
            if(isPalindrome(str))
            return str;
        }
        return "";
    }
};