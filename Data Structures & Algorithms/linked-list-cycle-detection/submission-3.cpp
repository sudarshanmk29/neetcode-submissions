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
    bool hasCycle(ListNode* head) {

        if(NULL == head) return false;
        ListNode* sptr = head;
        ListNode* fptr = head->next;

        while(NULL != sptr && NULL != fptr && NULL != fptr->next)
        {
            if(sptr == fptr)
                return true;
            sptr = sptr->next;
            fptr = fptr->next->next;
        }
        return false;
    }
};
