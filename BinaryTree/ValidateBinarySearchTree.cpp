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

    vector < int > v;
    void traversal(TreeNode* root){
         
         if(root==nullptr)return;
         traversal(root->left);
         v.push_back(root->val);
         traversal(root->right);
    }
    bool isValidBST(TreeNode* root) {

         traversal(root);
         
         for( int i = 1 ; i < v.size() ; i++ ){
             if(v[i] <= v[i-1] )return false;
         }

         return true;
    }
};