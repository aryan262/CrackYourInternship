class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(), prefix=0, result=0;
        vector<int>arr(k);
        arr[0]=1;

        for(auto pr:nums){
            prefix=(prefix + pr%k+k)%k;
            result+=arr[prefix];
            arr[prefix]++;
        }

        return result;
    }
};
