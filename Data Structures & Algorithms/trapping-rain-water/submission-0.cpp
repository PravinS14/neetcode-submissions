class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int l_max =0;
        int r_max =0;
        int result =0;
        while(l < r){
            if(height[l]<height[r]){
                if(l_max <= height[l]){
                    l_max = height[l];
                }
                else{
                    result += l_max-height[l];
                }
                l++;
            }
            else{
                if(r_max < height[r]){
                    r_max = height[r];
                }
                else{
                    result += r_max-height[r];
                }
                r--;
            }
        }
        
    return result;    
    }
};
