class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid;
        
        // corner case - for array rotated in n times;
        if(nums[0]<nums[e]){
            return 0;
        }
        
        while(s<e){
            mid=(s+e)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        
        return s;
    }
    int binary_search(vector<int>& nums, int target,int s,int e){
        int mid;
        while(s<=e){
            mid=(s+e)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
        
        
    int search(vector<int>& nums, int target) {
        int pivot=findMin(nums);
        
        if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            return binary_search(nums,target,pivot,nums.size()-1);
        }
        else{
            return binary_search(nums,target,0,pivot-1);
        }
        
    }
};