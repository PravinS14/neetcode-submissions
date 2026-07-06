class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n : nums){
            freq[n]++;
        }

        std::priority_queue < std::pair<int,int>,
        std::vector<std::pair<int,int>>,
        std::greater<std::pair<int,int>>
        > min_heap;

        for(auto [number, frequency] : freq){
            min_heap.push({frequency,number});
            if(min_heap.size() > k){
                min_heap.pop();
            }
        }
        std::vector<int> result;
        while(!min_heap.empty()){
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;    
    }
};
