class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> vv;
        
        q.push(root);
        cout << q.size() << endl;
        
        while(!q.empty())
        {
            int qSize = q.size();
            vector<int> temp;
            
            // loop nodes in queues and add their children
            for(int i = 0; i < qSize ; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node != NULL)
                {
                    temp.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }  
            }
            
            if(temp.size() > 0)
            {
                    vv.push_back(temp);
            }
        }
        
        return vv;
    }

};
