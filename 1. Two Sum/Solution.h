#pragma once
#include <vector>

using namespace std;

class Solution
{
public:
	Solution() = default;

	vector<int> twoSum(vector<int>& nums, int target)
	{
		int i = 0, j = 1;
		int iValue = nums[i];
		int sum = iValue + nums[j];

		while (sum != target)
		{
			if (j + 1 == nums.size())
			{
				iValue = nums[++i];
				j = i;
			}
			sum = iValue + nums[++j];
		}

		return { i,j };
	}
};
