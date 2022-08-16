
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> path;
        int sum = 0;
        
        DFS(root, targetSum, sum, path, paths);
        return paths;
    }
    
    void DFS(TreeNode* node, int targetSum, int sum, vector<int> &path, vector<vector<int>> &paths){
        if(node == NULL) return;
        if(node->left == NULL && node->right == NULL)         
        {   
            sum += node->val;
            path.push_back(node->val);
            if(sum == targetSum) paths.push_back(path);
            sum -= node->val;
            path.pop_back();
            }
        
        sum += node->val;
        path.push_back(node->val);
        DFS(node->left, targetSum, sum, path, paths);
        DFS(node->right, targetSum, sum, path, paths);
        sum -= node->val;
        path.pop_back();
    }
};
