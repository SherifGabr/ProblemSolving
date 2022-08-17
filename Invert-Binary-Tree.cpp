class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        inverter(root);
        return root;
    }
    void inverter(TreeNode* node){
        if(node == NULL || node->left == NULL && node->right == NULL) return;
        
        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;
        
        inverter(node->left);
        inverter(node->right);
    }
};
