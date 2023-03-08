class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size=nums.size(),s=0,e=size-1,mid=0;
        if(size==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[size-1]!=nums[size-2]){
            return nums[size-1];
        }
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid>0 && mid<size-1 && nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1]){
                if((size-mid)&1){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if((size-mid)&1){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        
        return -1;
    }
};