class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double ans = INT_MIN, sum = 0;
        int j = k , start = 0;
       
        for(int i = 0 ; i < k ; i++)
        {
            sum += nums[i];
        }
        ans = max(ans , (sum / k));

        while(j < nums.size())
        {
            sum += nums[j];
            sum -= nums[start];
            start++;
            ans = max(ans , (sum / k));
            j++;
        }
        return ans;
    }
};