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
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        ListNode * temp= head;
        ListNode* dum = NULL;
        ListNode* res = head;
        while(temp){
            temp= temp->next;
            res->next = dum;
            dum = res;
            res= temp;
        }
        return dum;
    }
};
