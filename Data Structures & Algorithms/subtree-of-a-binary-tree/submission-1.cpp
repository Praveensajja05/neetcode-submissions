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
bool check( TreeNode* root , TreeNode* target){
    if( !root and !target) return true;
    if( !root or !target) return false;
    if( root->val != target->val) return false;
    return check( root->left , target->left ) and check( root->right , target->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //if( root == subRoot) return check( root , subRoot);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if( temp->val == subRoot->val){
                bool canwebreak =  check( temp , subRoot);
                if( canwebreak) return true;
            }
            if( temp->left ) q.push( temp->left);
            if( temp->right) q.push(temp->right);
        }
        return false;

    }
};
