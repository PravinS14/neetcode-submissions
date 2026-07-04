class Solution {
public:
    bool isPalindrome(string s) {
        string t_s;
        bool res = false;
        for(auto e : s){
            if( ((e >= '0' && e <= '9') || (e >= 'A' && e <= 'Z') || (e >= 'a' && e <= 'z'))){
                t_s += e;
            }
        }
        int mid = t_s.size()/2;
        int siz = t_s.size()-1;
        if(t_s.size() <= 0 || t_s.size() == 1)
        res = true;
        if(t_s.size() > 1)
        for(int i =0; i < t_s.size(); i++){
            
            //if(((siz - i) <= mid)){
                cout<<t_s[i]<<":"<<t_s[siz-i]<<endl;
                if(tolower(t_s[i]) == tolower(t_s[siz-i])){
                    //cout<<t_s[i]<<":"<<t_s[siz-i]<<endl;
                    res = true;
                }
                else{
                    res = false;
                    return res;
                }
            //}

        }
        return res;   
    }
};
