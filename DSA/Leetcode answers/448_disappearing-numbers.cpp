class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int cur=1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==cur){
                cur++;
            }
            else if(nums[i]>cur){
                while(cur<nums[i]){
                    ans.push_back(cur++);
                }
                cur++;
            }
        }
        
        while(nums.size()>=cur && nums[nums.size()-1]<=cur){
            ans.push_back(cur++);
        }
        
        return ans;
    }
};