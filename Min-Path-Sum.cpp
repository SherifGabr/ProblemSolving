class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    int minTotal = triangle[0][0];
    if(triangle.size() == 1) return minTotal;
    minTotal = INT_MAX;
    for(int i = 1; i < triangle.size(); i++)
    {
        for(int j = 0; j < triangle[i].size(); j++ ){
            if(j == 0){
            triangle[i][j] = triangle[i][j] + triangle[i-1][j];
            }
            else if(j == triangle[i].size()-1){
                triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
            }
            else{
                triangle[i][j] = min(triangle[i][j] + triangle[i-1][j], triangle[i][j] + triangle[i-1][j-1]);
            }   
        }
    }    
    
    for(int i = 0; i < triangle[triangle.size() - 1].size(); i++){
        minTotal = min(minTotal, triangle[triangle.size()-1][i]);
    }
    return minTotal; 
    }
};
