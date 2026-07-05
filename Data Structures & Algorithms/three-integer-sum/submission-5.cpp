class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
                
        for(int i=0; i < nums.size(); i++){
           if (i > 0 && nums[i] == nums[i - 1]) {
                continue; 
            }
            int j = i + 1;
            int k = nums.size() - 1; 
           vector<int> temp;
           bool tset = false; 
            if(i != j && i != k && j != k){
                while (j < k) {
                    if(nums[j]+nums[k] == -(nums[i]) ){
                        result.push_back({nums[i], nums[j], nums[k]});

                        // Advance both pointers inward
                        j++;
                        k--;

                        // 3. FIX: Skip duplicates ONLY AFTER moving to a new element
                        while (j < k && nums[j] == nums[j - 1]) j++;
                        while (j < k && nums[k] == nums[k + 1]) k--;
                    }
                    else if(nums[j]+nums[k] < -(nums[i]) ){                   
                        j++;                       
                    }
                    else if(nums[j]+nums[k] > -(nums[i])){
                        k--;                      
                    }
                }    
            }
            //if(tset)
            //result.push_back(temp); 
        }
        return result;
    }
};
