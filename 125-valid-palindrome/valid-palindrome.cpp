class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, e = s.length() - 1;
        while(st < e)
        {
            while(st<e && !isalnum(s[st]))
            st++;

            while(st<e && !isalnum(s[e]))
            e--;

            if(tolower(s[st])!=tolower(s[e]))
            return false;

            st++;
            e--;
        }
        return true;
    }
};