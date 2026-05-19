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
    void reorderList(ListNode* head) {
        ListNode *slw = head, *fst = head;
        while(fst != nullptr && fst->next != nullptr)
        {
            slw = slw->next;
            fst = fst->next->next;
        }

        if(nullptr == slw)  return;
        if(fst == nullptr)
            fst = slw->next;

        
        ListNode *curr = slw->next;
        ListNode *prev = slw;
        ListNode *next = nullptr;

        /**
        * \brief Reverse the Linked List
        */
        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        /* Reorder the nodes */
        while(nullptr != head && head->next != slw && fst != nullptr)
        {
            ListNode *tmp1 = head->next;
            ListNode *tmp2 = fst->next;

            head->next = fst;
            fst->next = tmp1;
            head = tmp1;
            fst = tmp2;
        }
        if(nullptr != fst)
        {
            head->next = fst;
            fst->next = slw;
            slw->next = nullptr;
        }
    }
};
