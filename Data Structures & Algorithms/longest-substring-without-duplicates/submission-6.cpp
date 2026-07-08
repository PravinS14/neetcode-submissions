class Solution {
public:
        int lengthOfLongestSubstring(string s) {
        int len = s.size();
        string temp;
        string res;
        int i =0;
        int ret = 0;
        if(s.size()  > 1 ){
         while(i < len){
            //cout<<"i:"<<i<<endl;
                bool dup = false;
                for(int j =0; j < temp.size(); j++){
                    char x = s[i];
                    if(x == temp[j]){
                        dup = true;
                        if(dup){
                            if(ret < temp.size()){
                                ret = temp.size();
                            }
                            i = i-temp.size()+1;
                            temp.clear();
                        }
                        continue;
                    }   
                }
                if(!dup){
                    temp += s[i];
                    if(ret < temp.size()){
                        ret = temp.size();
                    }
                    i++;
                }
            }
         //cout<<"ret:"<< ret<< endl;
        }  
        else if(s.size() == 1){
            ret =1;
        }   
        return ret;    
    }
};
