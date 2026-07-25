class Solution {
	public:
	int getSecondLargest(vector<int> &arr) {
		// code here
		int l = arr.size();
		int max = 0;
		int Smax = 0;
		
		for (int i = 0; i < l; i++) {
			if (max < arr[i]) {
				Smax = max;
				max = arr[i];
			}
			
			if (arr[i] < max && arr[i] > Smax) {
				Smax = arr[i];
			}
		}
		if (Smax == 0)
			return - 1;
		return Smax;
	}
};
