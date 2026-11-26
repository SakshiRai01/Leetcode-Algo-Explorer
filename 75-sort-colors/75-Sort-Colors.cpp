class Solution {
public:
    void sortColors(vector<int>& nums) {
        int nz = 0 , no =  0 , nt = 0;
        for(auto i : nums)
        {
            if(i == 0)
            nz++;
            if(i == 1)
            no++;
            if(i == 2)
            nt++;
        }
        int i = 0;
        while(nz--)
        {
            nums[i++]=0;
        }
        while(no--)
        {
            nums[i++]=1;
        }
        while(nt--)
        {
            nums[i++]=2;
        }
    }
};