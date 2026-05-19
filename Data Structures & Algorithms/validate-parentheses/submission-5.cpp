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
                auto elt = stk.top();
                stk.pop();
                if(elt == 40 && x != 41)
                    return false;
                if(elt == 91 && x != 93)
                    return false;
                if(elt == 123 && x != 125)
                    return false;
            }
            else
                return false;
        }
        if(stk.empty())
            return true;
        return false;
    }
};
