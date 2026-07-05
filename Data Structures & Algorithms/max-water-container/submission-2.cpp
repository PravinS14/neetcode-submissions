class Solution {
public:
    int maxArea(vector<int>& heights) {
    int max = 0;
    int temp;
    
    int i = 0;                  // Initialize i outside
    int k = heights.size() - 1; // Initialize k outside
    
    while(i < k) {             // Only ONE loop needed
        if(heights[i] - heights[k] <= 0) {
            temp = (heights[i] * (k - i));
        }
        else if(heights[i] - heights[k] > 0) {
            temp = (heights[k]) * (k - i);
        }
        
        if(temp > max) {
            max = temp;
        } 
        
        // Your logic here is great!
        if(heights[i] < heights[k]) {
            i++; // Move left wall inward
        }
        else {
            k--; // Move right wall inward
        } 
    }
    return max;     
}
};
