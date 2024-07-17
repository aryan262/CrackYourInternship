class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x = nums[0], y=nums[0];
        while(true){
            x =nums[x], y=nums[nums[y]];
            if (x==y){
                break;
            }
        }
        x=nums[0];
        while (x!=y){
            x=nums[x];
            y=nums[y];
        }
        
        return y;
    }
};
