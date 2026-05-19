class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stk;
        for(auto x: s)
        {
            if(x == '(' || x == '[' || x == '{')
                stk.push(x);
            else if(!stk.empty())
            {
                if(stk.top() == '(' && x != ')')
                    return false;
                if(stk.top() == '[' && x != ']')
                    return false;
                if(stk.top() == '{' && x != '}')
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
