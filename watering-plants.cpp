class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int cap = capacity;
        
        for(int i = 0; i < plants.size(); i++)
        {
            if(cap >= plants[i])
            {
                cap -= plants[i];
                steps++;
            }
            else if (cap < plants[i]){

                steps += 2*(i);
                cap = capacity;
                cap -= plants[i];
                steps++;
                
            }
        }
        return steps;
    }
};

