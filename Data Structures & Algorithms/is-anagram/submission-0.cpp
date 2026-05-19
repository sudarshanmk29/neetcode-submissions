#include <cstdlib>
#include <cstring>
#define HASH_SIZE  255
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        size_t AC1[HASH_SIZE] = {0};
        size_t AC2[HASH_SIZE] = {0};

        for(int i = 0; i < s.length();  i++)
        {
            AC1[s[i]]++;
            AC2[t[i]]++;
        }

        if(memcmp(AC1, AC2, HASH_SIZE * sizeof(size_t)) == 0)
            return true;
        return false;
    }
};
