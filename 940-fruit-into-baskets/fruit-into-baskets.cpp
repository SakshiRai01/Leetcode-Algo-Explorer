class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        unordered_map<int , int> m;
        int n = fruits.size();

        int res = 0 , start = 0 , end = 0;
        while(end < n)
        {
            m[fruits[end]]++;

            while(m.size() > 2)
            {
                if(m[fruits[start]] == 1)
                    m.erase(fruits[start]);
                else
                    m[fruits[start]]--;
                start++;
            }
            res = max(res , end-start+1);
            end++;
        }
        return res;
    }
};