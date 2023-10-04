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
    int dfs(TreeNode* root){

    if( root == NULL)return 0;

    int temp1 = 0 , temp2 = 0 ;

    temp1 = 1 + dfs(root->left);
    temp2 = 1 + dfs(root->right);

    return max(temp1,temp2);

    }

    int maxDepth(TreeNode* root) {
         
         return dfs(root);
    }
   
};