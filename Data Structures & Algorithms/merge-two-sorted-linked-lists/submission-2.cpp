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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // Base cases: if one list is empty, return the remaining list
        if (!list1) return list2;
        if (!list2) return list1;
        
        // Choose the smaller value to be the current head node
        if (list1->val <= list2->val) {
            // Recurse with the rest of L1, connect the result to L1->next
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            // Recurse with the rest of L2, connect the result to L2->next
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
