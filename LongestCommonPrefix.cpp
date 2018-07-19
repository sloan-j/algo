class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        char c;
        // empty input
        if(strs.size() < 1) return res;
        
        // Loop through each word
        for(int i = 0; i < INT_MAX; i++){
            c = strs[0][i];
            
            // if current length if longer than the word length
            for(auto s : strs)
                if (i+1 > s.size() || c != s[i]) return res;
            
            res.push_back(c);
        }
        return res;
    }
};
