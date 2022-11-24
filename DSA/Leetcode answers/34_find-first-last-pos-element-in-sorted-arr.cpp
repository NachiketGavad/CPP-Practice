class Solution {
public:
    int first(vector<int>& nums, int k){
        int s=0,e=nums.size()-1;
        int ans=-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==k){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        return ans;
    }
    
    int last(vector<int>& nums, int k){
        int s=0,e=nums.size()-1;
        int ans=-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==k){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));
        return ans;
    }
};