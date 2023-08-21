class Solution {
public:
    int findComplement(int num) {
        vector<int> v;
        while(num!=0)
        {
            v.push_back(num%2);
            num/=2;
        }

        for(int i=0 ; i<v.size(); i++)
        {
            if(v[i]==0)
            v[i]=1;
            else
            v[i]=0;
        }

        long long int ans = 1;

        for(int i=0 ; i<v.size() ; i++)
        {
            num += v[i]*ans;
            ans *= 2;
        }
        return num;
    }
};