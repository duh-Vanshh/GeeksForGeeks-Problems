class Solution {
  public:
    bool areDisjoint(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(a[i]);
        }
        
        for (int i = 0; i < m; i++) {
            if (s.find(b[i]) != s.end()) {
                return false;
            }
        }
        
        return true;
    }
};