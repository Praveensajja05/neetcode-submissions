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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if( lists.empty()) return NULL;
        vector<int>vec;
        for( auto head : lists){
            ListNode* temp = head;
            while(temp){
                vec.push_back( temp->val);
                temp = temp->next;
            }
        }
        if( vec.empty()) return NULL;
        sort( vec.begin() , vec.end());
        ListNode* ans = new ListNode(vec[0]);
        ListNode* temp = ans;
        for( int i=1; i<vec.size();i++){
            ListNode* r = new ListNode(vec[i]);
            temp->next = r;
            temp = r;
        }
        return ans;
    }
};
