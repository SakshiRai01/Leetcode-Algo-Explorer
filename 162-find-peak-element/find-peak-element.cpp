class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1;
        while(low < high)
        {
            if(nums[low] <= nums[high])
                low++;
            else 
                high--;
        }
        return low;
    }
};