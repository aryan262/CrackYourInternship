class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n = points.size();
    		int ans = -1e9;
    		deque<pair<int, int>> dq;
    		dq.push_back({points[n - 1][0]+points[n - 1][1], points[n - 1][0]});
    		for (int i = n-2;i>=0; i--) {
    			while (!dq.empty() && dq.back().second>points[i][0] + k) {
    				dq.pop_back();
    			}
    			if (!dq.empty()) {
    				ans = max(ans, points[i][1]-points[i][0] + dq.back().first);
    			}
    			while (!dq.empty() && dq.front().first <= points[i][0] + points[i][1]) {
    				dq.pop_front();
    			}
    			dq.push_front({points[i][0]+points[i][1], points[i][0]});
    		}        
    		return ans;
    }
};
