class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum = 0;
        int n = stones.size();
        sort(stones.begin(), stones.begin() + n);
        
        for(int stone: stones)
        {   
            sum += stone;    
        }
        
        int dp[n + 1][(sum/2) + 1];
        memset( dp, 0, sizeof(dp));
        
        for(int i = 1; i <= n; i++)
        {
            for(int w = 1; w <= sum/2; w++)
            {
                if(stones[i-1] <= w)
                {
                    dp[i][w] = max(dp[i-1][w], stones[i-1] + dp[i-1][w - stones[i-1]]);
                    
                }
                else{
                    dp[i][w] = dp[i-1][w];
                    }
            }
        }
        return sum - 2*dp[n][sum/2];
    }
};




