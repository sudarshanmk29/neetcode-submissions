class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        size_t len = nums.size() + 1;
        int expected_sum = (len * (len - 1))/2;
        int observed_sum = 0;
        for(auto x: nums)   observed_sum += x;

        if(observed_sum == expected_sum) return 0;
        return(expected_sum - observed_sum);
    }
};
