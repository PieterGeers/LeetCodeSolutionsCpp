#pragma once
#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
	{
        unsigned char arr[128] = {0};
        int left = 0, right = 0;
        int result = 0;
        int count = 0;

        while (right < s.size())
        {
	        if (count > 0)
	        {
                if (--arr[s[left++]] == 1)
                {
                    count--;
                }
	        }
            else
            {
	            if (++arr[s[right++]] > 1)
	            {
                    count++;
                    result = max(result, right - left - 1);
	            }
            }
        }

        return count > 0 ? result : max(result, right - left);
    }
};

