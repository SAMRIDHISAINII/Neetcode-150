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
     bool isBalanced(TreeNode* root) {
        //  check if the balanced binary tree
        int max_node;
        return DFS(root, max_node);

    }
    
    bool DFS(TreeNode* root, int &max_node){
        // base case
        if (root == NULL){
            max_node = 1;
            return true;
        }
    
        // recursive case
        int left_m;
        int right_m;
        bool left_b;
        bool right_b;

        left_b = DFS(root->left, left_m);
        right_b = DFS(root->right, right_m);

        max_node = max(left_m, right_m) + 1;
        
        if (abs(left_m - right_m) > 1)
            return false;
        else
            return left_b && right_b;
        
    }
};
