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
        unordered_map<int, bool> map;
        while(nullptr != head)
        {
            if(map[(uintptr_t)head])
                return true;
            map[(uintptr_t)head] = true;
            head = head->next;
        }
        return false;
    }
};
