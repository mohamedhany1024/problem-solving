#include <iostream>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {

        string str = "";

        for (int i = 0; i < max(word1.size(), word2.size()); i++)
        {
            if (i <= word1.size() - 1)
            {
                str += word1[i];
            }

            if (i <= word2.size() - 1)
            {
                str += word2[i];
            }
        }
        return str;
    }
};