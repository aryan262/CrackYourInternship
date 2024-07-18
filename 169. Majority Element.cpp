class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1, ele=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ele){
                cnt++;
            }
            if(nums[i]!=ele && cnt>0){
                cnt--;
            }
            if(nums[i]!=ele && cnt==0){
                ele = nums[i];
                cnt++;
            }
        }
        return ele;
    }
};
