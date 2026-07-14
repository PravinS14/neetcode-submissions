class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left =0;
        //int right =0;
        int end = left + s1.size()-1;
        sort(s1.begin(),s1.end());
        while(end < s2.size()){
            string temp;
            //int count =0;
            if(left <= (s2.size()-s1.size())){
                temp = s2.substr(left,s1.size());
                sort(temp.begin(),temp.end());
                if(temp == s1){
                    return true;
                }else{
                    left++;
                    //end = left + s1.size()-1;
                }
            }
            else{
                break;
            }
        }
        return false;
    }
};
