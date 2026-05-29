class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto num: nums)
        {
            mp[num]++;
            if(1 < mp[num])
                return true;
        }
        return false;
    }
};