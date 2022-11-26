class Solution {
public:
    void solve(vector<int> nums,int ind,vector<vector<int>>& ans){
        
        if(ind>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        // recursive
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(nums,ind+1,ans);
            //backtracking
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,0,ans);
        return ans;
    }
};