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
    
    vector<int> ans;
    
    
    void postOrder(TreeNode *root, vector<int> &ans)
    {
        if(root==nullptr)
            return;
        
        postOrder(root->left,ans);
        postOrder(root->right,ans);
        
        ans.push_back(root->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        postOrder(root,ans);
        return ans;
    }
};