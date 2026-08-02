class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        int n = s.size();
        
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            if (s[left] > '1') {
                return false;
                
            }else {
                left++;
            }
            
            if(s[right] > '1') {
                return false;
                
            }else {
                right--;
            }
        }
        
        return true;
    }
};