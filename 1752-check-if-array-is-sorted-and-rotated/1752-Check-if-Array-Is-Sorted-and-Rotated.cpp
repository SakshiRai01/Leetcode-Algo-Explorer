class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);
        a=nums;
        sort(a.begin(),a.end());

        if(a == nums)
        return true;

        int p = n;
        while(--n)
        { 
            int first = nums[0];
            for(int i = 1 ; i < p ; i++)
            {
                nums[i-1] = nums[i];
            }
            nums[p-1] = first;
            if(nums == a)
            {
                return true;
                break;
            }
        }
        return false;
    }
};