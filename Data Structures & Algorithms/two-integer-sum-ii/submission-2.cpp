class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        int p =0;
        vector<int> result;
        for(int i =0; i < numbers.size(); i++){
            if(numbers[p]+numbers[n] > target){
                n--;
            }
            else if(numbers[p]+numbers[n] == target && p < n ) {
                result.push_back(p+1);
                result.push_back(n+1);
                return result;
            }
            else if(numbers[p]+numbers[n] < target){
                p++;
            }
        }
    return result;    
    }
};
