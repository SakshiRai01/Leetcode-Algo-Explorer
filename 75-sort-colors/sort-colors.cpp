class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int k = 0;
        int nz = 0 , no = 0 , nt = 0;
        for(auto i : nums)
        {
            if(i == 0)
            nz++;
            else if(i == 1)
            no++;
            else
            nt++;
        }

        while(nz--)
        {
            nums[k++] = 0;
        }

        while(no--)
        {
            nums[k++] = 1;
        }

        while(nt--)
        {
            nums[k++] = 2;
        }
    }
};