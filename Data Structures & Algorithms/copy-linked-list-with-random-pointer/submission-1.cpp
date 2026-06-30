/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

#include <cstdint>

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(!head) return nullptr;
        unordered_map<Node*, Node*> mp;
        Node* node = head;
        Node* res = new Node(node->val);
        mp[node] = res;
        node = node->next;
        Node* tmp = nullptr;
        Node* tail = res;
        while(node)
        {
            tmp = new Node(node->val);
            tail->next = tmp;
            tail = tmp;
            mp[node] = tail;
            node = node->next;
        }
        
        tail = res;
        while(head)
        {
            if(!head->random)
            {
                tail->random = nullptr;
            }
            tail->random = mp[head->random];
            tail = tail->next;
            head = head->next;
        }
        return res;
    }
};
