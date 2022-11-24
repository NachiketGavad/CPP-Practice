class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),r=n;
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]==val){
                r--;
                swap(nums[i],nums[r]);
            }
        }
        return r;
    }
};