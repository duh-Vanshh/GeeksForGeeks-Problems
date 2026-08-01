class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        int high = n - 1;
        int low = 0;
        
        while (high >= 0 && low < m) {
            if (a[high] > b[low]) {
                swap(a[high], b[low]);
                high--;
                low++;
            }else {
                break;
            }
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};