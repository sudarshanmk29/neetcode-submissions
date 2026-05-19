class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int observed_sum = 0;
        for(auto x: nums)   observed_sum += x;

        if(observed_sum == (((nums.size() + 1) * ((nums.size() + 1) - 1))/2)) return 0;
        return((((nums.size() + 1) * ((nums.size() + 1) - 1))/2) - observed_sum);
    }
};
