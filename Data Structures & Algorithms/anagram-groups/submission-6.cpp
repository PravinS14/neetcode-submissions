class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string,std::vector<string>> groups;
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
            groups[key].push_back(s);
        }
        vector<vector<string>> outstr;
        for(auto const& pair : groups){
            outstr.push_back(pair.second);
        }
        return outstr;
    }
};
