class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(), s=0;
        for(int i=n-k;i<n;i++){
            s+=cardPoints[i];
        }
        int ans = s;
        for (int i=0; i<k;++i) {
            s+=cardPoints[i]-cardPoints[n-k+i];
            ans = max(ans, s);
        }
        return ans;
    }
};
