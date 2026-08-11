class Solution {
	public:
	bool isSubset(vector<int> &a, vector<int> &b) {
		// code here
		unordered_map<int, int> map1;
		unordered_map<int, int> map2;
		int n = a.size();
		int m = b.size();
		int i = 0;
		
		while (i < n || i < m) {
		    if (i < n) {
		        map1[a[i]]++;
		    }
		    
		    if (i < m) {
		        map2[b[i]]++;
		    }
		    
		    i++;
		}
		
		for (int i = 0; i < m; i++) {
		    if (map1[b[i]] < map2[b[i]]) {
				return false;
			}
		}
		
		return true;
	}
};