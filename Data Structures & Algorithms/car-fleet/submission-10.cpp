class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<std::pair<int,int>> cars;
        for(int i =0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(),cars.rend());
        int fleet = 0;
        double max_t = 0.0;
        for(int i =0; i < position.size(); i++){
            double time = static_cast<double>(target-cars[i].first)/cars[i].second;
            if(time > max_t){
                fleet++;
                max_t  = time;
            }
            
        }
       return fleet; 
    }
};
