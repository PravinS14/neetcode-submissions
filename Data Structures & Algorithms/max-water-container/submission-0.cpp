class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max =0;
        //int result;
        int temp;
        for(int i =0; i < heights.size(); i++){
            int k = heights.size()-1;
            while(i < k){
                if(heights[i]-heights[k] <= 0){
                    temp = (heights[i]*(k-i));
                    //k--; 
                }
                else if(heights[i]-heights[k] > 0){
                    temp = (heights[k])*(k-i);
                }
                if(temp > max){
                    max = temp;
                    //result = heights[k]*k;
                    
                } 
                k--;
            }    
        }
        return max;     
    }
};
