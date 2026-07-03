class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> t_str;
        vector<string> temp;
        vector<vector<string>> result;
        
        t_str = strs;
        vector<bool> visited(t_str.size(), false);
        for(auto &str : t_str){
           //for(int k =0; k < t_str.size(); k++){
                sort(str.begin(),str.end());
            //}
        }
        
        for(int i =0; i < t_str.size(); i++){
            if(visited[i]) continue;
            temp.push_back(strs[i]);
            visited[i] = true;
            for(int j = i+1 ; j < t_str.size(); j++){
                //if(i != j){
                    if(!visited[j] && t_str[i] == t_str[j]){
                        temp.push_back(strs[j]);
                        visited[j] = true;
                        //strs.erase(strs.begin()+j);
                        //t_str.erase(t_str.begin()+j);
                    }
                    
                //}
            }
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
};
