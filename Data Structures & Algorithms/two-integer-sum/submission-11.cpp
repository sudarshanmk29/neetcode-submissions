/** 
* unordered_map::count() --> This function returns 1 if the key is present,
* else it returns a 0;
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int i = 0;
        for(; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        i=0;
        for(auto num: nums)
        {
            int diff = target - num;
            if(mp.count(diff) && mp[diff] != i)
                return {i, mp[diff]};
            ++i;
        }
        return {};
    }
};
