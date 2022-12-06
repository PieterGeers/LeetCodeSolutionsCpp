// 4. Median of Two Sorted Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Solution.h"
#include <iostream>

int main()
{
    Solution s{};
    vector<int> a1 = { 1,3 };
    vector<int> a2 = { 2 };
	auto result = s.findMedianSortedArrays(a1, a2);
    cout << result << endl;
}
