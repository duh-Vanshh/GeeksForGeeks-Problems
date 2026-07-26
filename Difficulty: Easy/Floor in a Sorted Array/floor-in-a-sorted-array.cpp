class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int low = 0, high = n - 1;
        int mid;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        
        return low - 1;
    }
};
