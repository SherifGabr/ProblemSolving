class Solution {
vector<vector<int>> vv;
vector<int> v;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {        
        dfs(0, candidates, 0, target);

        return vv;
    }
    
    void dfs(int i, vector<int>& candidates, int sum, int target)
    {   
        if(sum == target) 
        {
            vv.push_back(v);
            return;
        }
        
        if(i >= candidates.size() || sum > target) return;
        
        v.push_back(candidates[i]);
        dfs(i, candidates, sum + candidates[i], target);
        
        v.pop_back();
        dfs(i+1, candidates, sum, target);   
    }
    
};

