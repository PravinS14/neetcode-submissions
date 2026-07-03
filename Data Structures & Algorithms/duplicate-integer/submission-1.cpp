class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() > 0)
        for( int i=0; i <= nums.size()-1; i++){
            for(int j=0; j < nums.size()-1; j++){
                if(i != j){
                    if(nums[j] == nums[i]){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }
};