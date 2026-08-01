class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0, high = n-1;
        
        while (low < high) {
            if (arr[low] < 1){
                low += 1;
            }
            
            if (arr[high] > 0) {
                high -= 1;
            }
            
            if (arr[low] > arr[high] && low < high) {
                int temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
        }
    }
};