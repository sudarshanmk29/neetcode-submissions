class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> track_map;
        for(auto x: nums)
        {
            track_map[x]++;
        }

        for(auto y: track_map)
        {
            if(y.second > 1)
                return true;
        }
        return false;
    }
};