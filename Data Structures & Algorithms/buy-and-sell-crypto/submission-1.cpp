class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        vector<int> profit;
        for(auto x = prices.begin(); x != prices.end() - 1; x++)
        {
            auto maximum = *max_element(x+1, prices.end());
            if(*x < maximum)
                profit.push_back((maximum - *x));
        }    

        return (profit.empty())? 0 : *max_element(profit.begin(), profit.end());
    }
};
