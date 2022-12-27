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
// finding the diwamter of the binary tree
   int ans;
    int depth(TreeNode* node){
     
        if(node ==NULL)
        return 0;

        // if(node == NULL) return 0;
//         base soklution
//         taling left 
//         taking right
        // /taling÷tje answer
//         returnign left right
        int l = depth(node->left);
        int r = depth(node->right);
        ans = max(ans, l+r);
        return max(l,r)+1;
     
    }
    
    
//    
// taking for the dieamtwr of the binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        depth(root);
        return ans;
    }
};
