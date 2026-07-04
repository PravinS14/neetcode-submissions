class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
       // bool enter = false;
        for(int i = 0; i < nums.size(); i++){
            int temp = 1;
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    temp *= nums[j];
                    //enter = true;
                }
            }
            //if(enter)
            result.push_back(temp);
            //enter = false;
        }
        return result;
    }
};
