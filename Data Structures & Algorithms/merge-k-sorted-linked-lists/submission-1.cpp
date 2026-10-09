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
struct cmp{
    bool operator()(ListNode* a , ListNode* b){
        return a->val > b->val;
    }

};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* , vector<ListNode*> , cmp>pq;
        int n= lists.size();
        for( int i=0 ; i<n;i++){
            if( lists[i]) pq.push(lists[i]);
        }
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        while( !pq.empty()){
            temp->next =pq.top();
            temp = temp->next;
            pq.pop();
            if( temp->next) pq.push(temp->next);
        }
        temp->next = NULL;
        return dum->next;
    }
};
