class Solution {
	public:
	bool isSubset(vector<int> &a, vector<int> &b) {
		// code here
		unordered_map<int, int> mp;
		int n = a.size();
		int m = b.size();
		
		for (int i = 0; i < n; i++) {
		    mp[a[i]]++;
		}
		
		for (int i = 0; i < m; i++) {
		    if (mp[b[i]] == 0) {
				return false;
			}
			
			mp[b[i]]--;
		}
		
		return true;
	}
};