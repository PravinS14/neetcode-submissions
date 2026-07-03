class Solution {
public:
    bool isAnagram(string s, string t) {
        //if(s.size() == t.size()){
            //int ln1 =0;
            //int ln2 =0;
            //string temp1 = s;
            //string temp2 = t;
            //cout<<"size:"<<s.size()<<endl;
            //for(int i = 0; i <= s.size(); i++){
                //for(int j = 0; j < s.size()-i; j++){
                    //if(i != j){
                        //if(s[j] < s[j+1]){
                            //char temp = s[j];
                            //s[j] = s[j+1];
                            //(s[j+1]) = temp;  
                        //}
                        //if(t[j] < t[j+1]){
                            //char temp = t[j];
                            //t[j] = t[j+1];
                            //(t[j+1]) = temp;
                        
                        //}
                    //}
                //}
                //ln1 += (int)s[i];
            //}
            //for(int j = 0; j < t.size(); j++){
               // ln2 += (int)t[j];
            //}
            //if(ln1 == ln2){
               // return true;
            //}
            //cout<<"t1: "<< s<<endl;
            //cout<<"t2: "<< t<<endl;
            //if(s == t){
               // return true;
            //}
        //}
        if(s.size() != t.size()){
            return false;
        }
        int arr[26] = {0};
        for(int i =0; i<s.size(); i++ ){
            arr[t[i] - 'a']++;
            arr[s[i] - 'a']--;
        }
        for(int i =0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
        
    }
};
