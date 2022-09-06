class Solution {
string s;
int sum = 0;
public:
    int sumNumbers(TreeNode* root) {
        
        DFS(root);
        return sum;
    }
    
    void DFS(TreeNode* node)
    {
        if(node == NULL) return;
        if(node->left == NULL && node->right == NULL)
        {
            
            char nodeVal;
            stringstream ss;
            ss << node->val;
            ss >> nodeVal;
            s.push_back(nodeVal);
            sum += stoi(s);
            s.pop_back();
        }
        
        char nodeVal;
        stringstream ss;
        ss << node->val;
        ss >> nodeVal;
        s.push_back(nodeVal);
        
        DFS(node->left);
        DFS(node->right);
        s.pop_back();
        
    }
};
