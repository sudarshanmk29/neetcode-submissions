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

        auto original_str = s;

        for(int i = 0, j = s.length() - 1; i <= s.length()/2 && j >= s.length()/2; i++, j--)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }  

        if(original_str.compare(s) == 0)
            return true;
        return false;
    }
};
