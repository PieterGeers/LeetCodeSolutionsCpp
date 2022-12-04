#pragma once

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution
{
public:
    Solution() = default;

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
        ListNode* head = new ListNode();
        ListNode* temp = head;
        int carry = 0, sum = 0;

        while (l1 || l2 || carry != 0)
        {
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return head->next;
    }
};

