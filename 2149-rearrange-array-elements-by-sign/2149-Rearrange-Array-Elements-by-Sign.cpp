class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans,n1,n2;
        for(auto i : nums)
        {
            if(i>0)
            n1.push_back(i);
        }
        for(auto i : nums)
        {
            if(i<0)
            n2.push_back(i);
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i%2 == 0)
            {
                ans.push_back(n1[i/2]);
            }
            else
            ans.push_back(n2[i/2]);
        }
        return ans;
    }
};