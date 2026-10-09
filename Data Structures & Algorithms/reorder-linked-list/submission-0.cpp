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
ListNode* reverse( ListNode* head){
    ListNode* temp = head;
    ListNode* res = head;
    ListNode* dum= NULL;
    while( temp){
        temp = temp->next;
        res->next = dum;
        dum= res;
        res= temp;
    }
    return dum;
}
    void reorderList(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast = head;
        while( fast and fast->next){
            slow= slow->next;
             fast = fast->next->next;
        }
        ListNode* head2= slow->next;
        slow->next = NULL;
        ListNode* sechead = reverse(head2);
        ListNode* curr1 = head;
        ListNode* curr2 = sechead;
        ListNode* nxt= NULL;
        while( curr1 and curr2){
            nxt = curr1->next;
            curr1->next = curr2;
            curr1= curr2;
            curr2=nxt;
        }
    }
};
