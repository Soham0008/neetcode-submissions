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
    bool isValidBST(TreeNode* root) {
        return isvalid(root,LONG_MAX,LONG_MIN);
    }

    bool isvalid(TreeNode* root, long right, long left){
        if(!root) return true;
        if(!(left < root->val && right > root->val)) return false;

        return isvalid(root->left, root->val, left) &&
               isvalid(root->right, right, root->val);
    }
};
