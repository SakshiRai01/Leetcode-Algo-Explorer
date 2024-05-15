class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();

        double ans;
        
        int i = 0 , j = 0 , m1 = 0 , m2 = 0;

        for(int count = 0 ; count <= (n + m)/2 ; count++)
        {
            m1 = m2;
            if(i != n && j != m)
            {
                if(nums1[i] > nums2[j])
                {
                    m2 = nums2[j++];
                }
                else
                {
                    m2 = nums1[i++];
                }
            }
            else if(i < n)
            {
                m2 = nums1[i++];
            }
            else
            {
                m2 = nums2[j++];
            }
        }

        if((n + m) % 2 == 1)
        {
            ans = m2;
        }
        else
        {
            ans = ((double) m1 + (double) m2) / 2.0;
        }

        return ans;

    }
};