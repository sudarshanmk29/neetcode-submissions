class Solution {
public:
    bool isPalindrome(string s) 
    {
        /* String Clean up of all special characters */
        for(auto x = s.begin(); x != s.end(); )
        {
            if(isalnum(*x) == 0)
            {
                s.erase(x);
            }
            else
            {
                if(isupper(*x))
                    *x = tolower(*x);
                x++;
            }
        }

        /* Palindrome validation using two pointer method */
        for(int i = 0, j = s.length() - 1; i <= s.length()/2 && j >= s.length()/2; i++, j--)
        {
            if(s[i] != s[j])
                return false;
        }  
        return true;
    }
};
