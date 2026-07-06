class Solution {
public:

    string encode(vector<string>& strs) {
    string enc;
    for (string s : strs) {
        enc += s + "|";
    }
    return enc;
}

vector<string> decode(string s) {
    vector<string> dec;
    int i = 0;
    string sz;
    for (char c : s) {
        if (c != '|') {
            sz += c;
        }
        else if (c == '|') {
            dec.insert(dec.begin() + i, sz);
            sz.erase();
            i++;
        }
    }
    return dec;
}
};
