class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for (int i = 1; i < n; i += 2) {
            int temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp;
        }
    }
};