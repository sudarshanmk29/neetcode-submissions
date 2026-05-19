class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz = numbers.size();
        int left = 0, right = sz - 1;
        vector<int> result;
        result.clear();
        
        while(left < right)
        {
            int sum = numbers[left] + numbers[right];
            if(sum > target)
            {
                --right;
            }
            else if(sum < target)
            {
                ++left;
            }
            else
            {
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            }
        }
        return result;
    }
};
