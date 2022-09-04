class Solution {
int retVal = 0;
int j = 0;
public:
    int kthSmallest(TreeNode* root, int k) {
        
        DFS(root, k);
        return retVal;
    }
    
    void DFS(TreeNode* node, int k)
    {
        
        if(node == NULL) {
            return;}
        
        DFS(node->left, k);
        
        j++;
        if(k == j)
        {
            retVal = node->val;
            return;
        }
        DFS(node->right, k);
        
    }
};
