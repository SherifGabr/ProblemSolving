class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int numToBuy = 0;
        sort(costs.begin(), costs.begin()+costs.size());
        for(int cost: costs)
        {
            if(coins >= cost)
            {
                coins -= cost;
                numToBuy++;
            }
        }
        return numToBuy;
    }
};
