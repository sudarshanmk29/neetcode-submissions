class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        auto x = distance(nums.begin(), find(nums.begin(), nums.end(), target));
        if(x == nums.size())
            return -1;
        return x;
    }
};
