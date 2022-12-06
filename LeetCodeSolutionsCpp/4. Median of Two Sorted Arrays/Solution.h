#pragma once

#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
        vector<int> nums3((nums1.empty() ? 0 : nums1.size()) + (nums2.empty() ? 0 : nums2.size()));
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());

        int sum = nums3[nums3.size() / 2];
        if (nums3.size() % 2 == 0)
        {
            sum += nums3[(nums3.size() / 2) - 1];
            return sum / 2.0;
        }

        return sum;
    }
};

