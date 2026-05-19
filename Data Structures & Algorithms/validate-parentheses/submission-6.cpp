class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stk;
        for(auto x: s)
        {
            if(x == 40 || x == 91 || x == 123)
                stk.push(x);
            else if(!stk.empty())
            {
                if(stk.top() == 40 && x != 41)
                    return false;
                if(stk.top() == 91 && x != 93)
                    return false;
                if(stk.top() == 123 && x != 125)
                    return false;
                stk.pop();
            }
            else
                return false;
        }
        if(stk.empty())
            return true;
        return false;
    }
};
