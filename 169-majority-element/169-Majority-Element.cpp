class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            m[nums[i]]++;
        }

        for(const auto& [k,v]:m)
        {
            if(v>nums.size()/2)
            ans = k;
        }
        return ans;
    }
};