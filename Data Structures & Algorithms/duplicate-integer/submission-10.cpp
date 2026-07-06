class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
       for(int i =0; i< nums.size(); i++){
        for(int j =1; j < nums.size(); j++){
            if(nums[i]==nums[j] && (i != j)){
               res = true;  
            }      
        }
       }
        return res;
    }
};
