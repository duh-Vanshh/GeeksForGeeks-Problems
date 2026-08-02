class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        vector <int> vec;
        int n = a.size();
        int m = b.size();
        
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                if (vec.empty() == true) {
                    vec.insert(vec.end(), a[i]);
                    k++;
                    i++;
                    j++;                    
                }else if (a[i] != vec[k-1]) {
                    vec.insert(vec.end(), a[i]);
                    k++;
                    i++;
                    j++;
                }else {
                    i++;
                    j++;
                }
            }else if (a[i] < b[j]) {
                i++;
            }else if (a[i] > b[j]) {
                j++;
            }
        }
        
        return vec;
    }
};