class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i =0; i<nums.size(); i++){
            for(int j = 0; j <nums.size(); j++){
                //if(nums[i] <= target){
                    if(i != j){
                        if((signed int)target == (signed int)nums[i]+(signed int)nums[j]){
                            result.push_back(i);
                            result.push_back(j);
                            return result;
                            
                        }
                    }
                //}
            }
                
        }
        


        
    }
};
