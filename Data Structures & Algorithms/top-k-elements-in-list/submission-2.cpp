class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result;
        unordered_map<int, int> vec;
        for(auto &num : nums){
            vec[num]++;
        }
        vector<pair<int, int>> pairs;
        for(auto pair: vec){
            pairs.push_back({pair.second, pair.first});
        }
        sort(pairs.rbegin(), pairs.rend());
        for(int l = 0; l < k; l++){
            result.push_back(pairs[l].second);
        }
        return result;
    }
};
