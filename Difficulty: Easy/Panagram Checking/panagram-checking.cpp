class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        vector<bool> seen(26, false);
        
        for (char c : s) {
            c = tolower(c);
            
            if (c >= 'a' && c <= 'z') {
                seen[c - 'a'] = true;
            }
        }
        
        for (int i = 0; i < 26; i++) {
            if (!seen[i]) {
                return false;
            }
        }
        
        return true;
    }
};