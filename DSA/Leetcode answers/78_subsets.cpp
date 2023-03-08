class Solution {
public:
    vector<vector<int>> solve(vector<int> &nums,int ind,vector<int> output, vector<vector<int>> &ans){
        if(ind >=nums.size()){
            ans.push_back(output);
            return ans;
        }
        
        //exclude
        solve(nums,ind+1,output,ans);
        
        //include
        output.push_back(nums[ind]);
        solve(nums,ind+1,output,ans);
        
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        
        return solve(nums,0,output,ans);
    }
};