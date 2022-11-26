class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        //brute force
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
        
        // by hashmap
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        
        int rem;
        for(int i=0;i<nums.size();i++){
            rem=target-nums[i];
            if(m[rem]!=0 && m[rem]!=i){
                ans.push_back(i);
                ans.push_back(m[rem]);
                break;
            }
        }
        return ans;
    }
};