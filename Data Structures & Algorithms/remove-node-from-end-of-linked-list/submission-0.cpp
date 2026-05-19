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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *right = head;
        ListNode *left = nullptr;
        ListNode *dummy = new ListNode;
        dummy->val = 0;
        dummy->next = head;
        left = dummy;
        for(int i=0;  i < n && nullptr != right; i++)
        {
            right = right->next;
        }

        while(nullptr != right)
        {
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return dummy->next;
    }
};
