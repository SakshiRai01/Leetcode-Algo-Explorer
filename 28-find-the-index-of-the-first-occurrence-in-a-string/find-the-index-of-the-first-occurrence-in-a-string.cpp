class Solution {
public:
    int strStr(string haystack, string needle) {
        int ns = needle.length();
        int hs = haystack.length();

        for(int i = 0 ; i <= hs-ns ; i++)
        {
            if(haystack.substr(i , ns) == needle)
            return i;
        }
        return -1;
    }
};