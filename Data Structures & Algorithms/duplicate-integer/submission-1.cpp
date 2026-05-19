class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> dup_check;
        for(auto x: nums)
        {
            if(dup_check[x] == true)    return true;
            dup_check[x] = true;
        }
        return false;
    }
};