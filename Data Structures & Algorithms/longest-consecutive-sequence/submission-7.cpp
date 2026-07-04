class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        int temp =1;
        if(nums.size() > 0)
        for(int i = 0; i < nums.size()-1; i++){
            if((signed int)nums[i] == (signed int)nums[i+1] -1 ){
                temp++;
            }
            else if((signed int)nums[i] == (signed int)nums[i+1]){
                //continue;
            }
            else{
            
                temp =1;
            }
            if(temp > res)
                    res = temp;
        }
        if(nums.size() == 1){
            res = 1;
        }
       return res; 
    }
};
