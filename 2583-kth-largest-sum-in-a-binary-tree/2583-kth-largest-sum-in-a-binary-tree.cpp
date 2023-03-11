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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
         vector<long long int>nodesum; 
        queue<TreeNode*>q; 
        q.push(root);  //Base case 

        while(!q.empty()){
            long long int sum=0;
            vector<int>data;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }  
            
            for(int i=0;i<data.size();i++)
                sum+=data[i];
            
            
            nodesum.push_back(sum);
        }

        sort(nodesum.begin(),nodesum.end()); 
        if(k>nodesum.size())return -1; //edge case
        return nodesum[nodesum.size()-k];
        
        
    }
};