class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vv;
        
        if(numRows == 1) {
            return {{1}};
        }
        
        else if(numRows == 2){
            return {{1}, {1, 1}};
        }
        vv.push_back({1});
        vv.push_back({1,1});
        
        for(int i = 3; i <= numRows; i++){
            vector<int> temp;    
            temp.push_back(1);
            
            for(int j = 0; j < vv[i-2].size(); j++){
                if(j == 0 || j == vv[i-2].size()) continue;
                
                int num = vv[i-2][j] + vv[i-2][j-1];
                temp.push_back(num);
            }
            temp.push_back(1);
            vv.push_back(temp);
        }      
        
        return vv;
    }
};
