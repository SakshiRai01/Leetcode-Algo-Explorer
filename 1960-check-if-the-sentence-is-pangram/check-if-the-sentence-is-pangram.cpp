class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> fre(26,0);
        for(auto c : sentence)
        {
            int index = c - 'a';
            fre[index]++;
        }

        for(int i = 0 ; i < 26 ; i++)
        {
            if(fre[i] == 0)
            return false;
        }

        return true;
    }
};