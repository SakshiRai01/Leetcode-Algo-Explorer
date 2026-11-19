class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty())
        return;

        char last = s.back();
        s.pop_back();

        reverseString(s);

        s.insert(s.begin(),last);
    }
};