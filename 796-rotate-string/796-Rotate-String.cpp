class Solution {
public:
    bool rotateString(string s, string goal) {
       int n = s.size();
       if(n != goal.size())
       return false;
       
       if(s == goal)
       return true;

       for(int i = 0 ; i < n ; i++)
       {
            char a = s[0];
            for(int j = 1 ; j < n ; j++)
            {
                s[j-1] = s[j];
            }
            s[n-1] = a;

            if(s == goal)
            return true;
       }
       return false;
    }
};