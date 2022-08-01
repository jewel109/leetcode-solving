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
    void swap(TreeNode *running){
        if(!running){
            return;
        }
       // cout << running->val << endl;
        swap(running->left);
       // cout << "left " << running->val << endl;
        
        swap(running->right);
       // cout << "right " << running->val << endl;
        TreeNode *temp;
        temp = running->left;
        running->left = running->right;
        running->right = temp;
        cout << "after " << running->val <<endl ;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        
        swap(root);
        return root;
        
    }
};