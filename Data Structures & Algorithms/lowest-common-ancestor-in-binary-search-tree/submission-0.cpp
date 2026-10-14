/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
void check( TreeNode* root , TreeNode* p , vector<TreeNode*>&vec){
    vec.push_back( root);
    if( root->val == p->val) return;
    if( root->val > p->val) check( root->left , p , vec);
    else check( root->right , p , vec);
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>pathp , pathq;
        check( root , p,pathp);
        check( root , q,pathq);
        int i=0; TreeNode* ans = NULL;
        while( i<pathp.size() and i<pathq.size()){
            if( pathp[i]->val == pathq[i]->val){
                ans= pathp[i];
            }
            i++;
        }
        return ans;
    }
};
