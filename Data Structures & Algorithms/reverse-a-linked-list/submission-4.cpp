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

class Solution 
{
private:
    ListNode *tail = nullptr;
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        ListNode *temp = head->next;
        head->next = tail;
        tail = head;
        head = temp;
        reverseList(head);
        return tail;
    }
};
