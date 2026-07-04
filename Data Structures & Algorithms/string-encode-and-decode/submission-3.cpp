class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(auto &str : strs){
            enc += to_string(str.size())+"~"+ str;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        string temp;
        int i =0;

        while(i < s.size()){
            int j = i;
            while(s[j] != '~'){
                j++;
            }
            int length = std::stoi(s.substr(i,j-i));
            i = j+1;
            dec.push_back(s.substr(i,length));
            i += length;
        }
    return dec;    
    }
};
