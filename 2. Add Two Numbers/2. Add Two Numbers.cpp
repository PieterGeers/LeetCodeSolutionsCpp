// 2. Add Two Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Solution.h"

int main()
{
	Solution s{ };
	ListNode* head1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	ListNode* head2 = new ListNode(5, new ListNode(6, new ListNode(4)));

	auto result = s.addTwoNumbers(head1, head2);
}

