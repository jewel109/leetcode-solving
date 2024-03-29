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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(diameter,root);
        return diameter;
    }
private:
    int height(int& diameter,TreeNode* root){
        if(!root) return 0;
        
        int lh = height(diameter, root->left );
        int rh = height(diameter, root->right );
        
        diameter = max( diameter, lh+rh );
        cout << diameter << endl;
         return 1 + max(lh,rh);
    }
};