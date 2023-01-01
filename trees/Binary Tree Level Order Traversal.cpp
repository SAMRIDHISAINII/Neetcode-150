class Solution {
public:
    vector<vector<int>> v;
    
    void buildVector(TreeNode *root, int depth){
        if(root == NULL) 
        return;

        if(v.size() == depth)
            v.push_back(vector<int>());
    
        v[depth].push_back(root->val);
        // v[depth].push_back(root->val);
        buildVector(root->left, depth+1);
        buildVector(root->right, depth+1);
        // buildVector(root->left, depth + 1);
        // buildVector(root->right, depth + 1);
    }

    vector<vector<int> > levelOrder(TreeNode *root) {
        buildVector(root, 0);

        return v;
    }
};
