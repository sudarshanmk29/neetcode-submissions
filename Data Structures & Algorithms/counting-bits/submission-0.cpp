class Solution {
public:
    int set_count(int n)
    {
        int ret = 0;
        while(n)
        {
            n = n & (n-1);
            ret++;
        }
        return ret;
    }
    vector<int> countBits(int n) 
    {
        vector<int> result;
        for(int i = 0; i <= n; i++)
        {
            result.push_back(set_count(i));
        }    
        return result;
    }
};
