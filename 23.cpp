class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=nums.size();
        int sum=(s*(s+1))/2;
        int sums=0;
        for(int i=0;i<s;i++){
            sums=sums+nums[i];
        }
        int diff=sum-sums;
        return diff;
    }
};
