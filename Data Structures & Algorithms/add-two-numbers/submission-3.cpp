/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* head = result;
        int carry = 0;
        ListNode* tail = nullptr;
        while(l1 && l2)
        {
            tail = new ListNode;
            tail->val = (l1->val + l2->val + carry)%10;
            carry = (l1->val + l2->val + carry)/10;
            l1 = l1->next;
            l2 = l2->next;
            result->next = tail;
            result = tail;
        }

        while(l1)
        {
            tail = new ListNode;
            tail->val = (l1->val + carry)%10;
            carry = (l1->val + carry)/10;
            result->next = tail;
            result = tail;
            l1 = l1->next;
        }

        while(l2)
        {
            tail = new ListNode;
            tail->val = (l2->val + carry)%10;
            carry = (l2->val + carry)/10;
            l2 = l2->next;
            result->next = tail;
            result = tail;
        }

        if(carry)
        {
            tail = new ListNode;
            tail->val = carry;
            result->next = tail;
        }
        return head->next;
    }
};
