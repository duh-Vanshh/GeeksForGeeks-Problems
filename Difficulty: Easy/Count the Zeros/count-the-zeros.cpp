class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count = 0;
        int low = 0, high = n-1;
        long mid = 0;
        
        while (low <= high) {
            mid = (low + high) / 2;
            
            if (arr[mid] == 1) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        if (arr[mid] == 1) {
            count = n - (mid + 1);
        }else {
            count = n - mid;
        }
        
        return count;
    }
};