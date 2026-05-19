class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        int diff;
        for(auto x = nums.begin(); x != nums.end(); x++)
        {
            diff = target - *x;

            auto it = find(x+1, nums.end(), diff);
            if(it != nums.end())
            {
                result.push_back(distance(nums.begin(), x));
                result.push_back(distance(nums.begin(), it));
                break;
            }
        }    
        return result;
    }
};
