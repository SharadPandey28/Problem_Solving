class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int minf=0;
        for(int i=0;i<n;i++){
            if(i>minf){
                return false;
            }
            minf=max(minf,i+nums[i]);
        }
        return true;
    }
};
