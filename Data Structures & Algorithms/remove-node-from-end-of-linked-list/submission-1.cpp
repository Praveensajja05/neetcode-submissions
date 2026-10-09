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
        ListNode* temp = head;
        int cnt=1;
        while( temp->next){
            temp = temp->next;
            cnt++;
        }
        ListNode* dum = new ListNode(0);
        dum->next = head;
        int res=0;
        temp = dum;
        while( res<( cnt -n)){
            temp= temp->next;
            res++;
        }
        temp->next = temp->next->next;
        return dum->next;
    }
};
