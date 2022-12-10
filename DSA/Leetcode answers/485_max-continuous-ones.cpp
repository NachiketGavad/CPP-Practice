class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN,c=0;
        bool flag=false;

        for(int i=0;i<nums.size();i++){
            if(flag){
                if(nums[i]==0){
                    if(maxi<c){
                        maxi=c;
                    }
                    c=0;
                }
                else{
                    c++;
                }
            }
            else if(nums[i]==1){
                    c++;
                    flag=true;
            }
        }
        if(maxi<c){
            maxi=c;
        }
        return maxi;
    }
};