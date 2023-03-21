class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,i=0,j=0,cur=0;
        
        while(i<nums.size()){
            // cur is size of subpart
            cur=0;

            // find the parts of array where all elements are 0 
            while(i<nums.size() && nums[i]==0){
                cur++;
                i++;
            } 
            // in this the total occurence will be n*n+1/2
            ans+=((cur*(cur+1))>>1);
            // increment to the next index
            // ans will be found in o(n) traversal
            i++;
        }
        return ans;
    }
};