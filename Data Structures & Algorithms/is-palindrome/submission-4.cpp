class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(auto x = s.begin(); x != s.end(); )
        {
            if(isalnum(*x) == 0)
            {
                s.erase(x);
            }
            else
                x++;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
        }

        for(int i = 0, j = s.length() - 1; i <= s.length()/2 && j >= s.length()/2; i++, j--)
        {
            if(s[i] != s[j])
                return false;
        }  
        return true;
    }
};
