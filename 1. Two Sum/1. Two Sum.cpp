// 1. Two Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "Solution.h"

using namespace std;

int main()
{
	Solution s{};
	vector<int> nums{ 2,7,11,15 };
	auto result = s.twoSum(nums, 17);
	cout << result[0] << ", " << result[1] << endl;
}