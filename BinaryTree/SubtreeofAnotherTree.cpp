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

  
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         
        if(!root)return false;

        if( isSameTree(root,subRoot)){
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
      
        
    }

    bool isSameTree(TreeNode* root , TreeNode* sub ){
         
         if(!root && !sub)return true;
         
         if(!root || !sub )return false;

         if(root->val != sub->val )return false;

         return isSameTree(root->left,sub->left) && isSameTree(root->right,sub->right);
         
    }
};