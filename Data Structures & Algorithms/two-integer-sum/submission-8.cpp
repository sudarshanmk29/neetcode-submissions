class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int dst = 0;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            dst = target - nums[i];
            auto it = find(nums.begin()+(i+1), nums.end(), dst);
            if(it != nums.end())
            {
                result.push_back(i);
                result.push_back(distance(nums.begin(), it));
                return result;
            }
        }
        return result;
    }
};
