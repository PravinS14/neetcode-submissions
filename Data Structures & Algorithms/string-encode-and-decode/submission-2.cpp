class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(auto &str : strs){
            enc += str+"~";
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        string temp;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '~'){
                temp += s[i];
            }
            else{
                dec.push_back(temp);
                temp.erase();
            }
        }
    return dec;    
    }
};
