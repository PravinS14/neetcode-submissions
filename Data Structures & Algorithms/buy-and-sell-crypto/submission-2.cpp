class Solution {
public:
    int maxProfit(vector<int>& prices) {
        signed int max =0;
        for(int i=0; i < prices.size(); i++){
            for(int j =0; j < prices.size(); j++){
                if(i != j && !(j < i)){
                signed int temp = prices[j]-prices[i];
                if(temp > max){
                    max = temp;
                }
                }
                
            }
        }
        return max;
    }
};
