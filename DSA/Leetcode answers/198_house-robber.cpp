class Solution {
public:
    int robrec(vector<int>& nums, int n,int sum,vector<int> &temp){
        if(n<0){
            return 0;
        }
        // cout<<n<<" "<<sum<<endl;
        // cout<<n<<" "<<sum<<" "<<taken<<" "<<nott<<endl;
        if(temp[n]!=-1){
            return temp[n];
        }
        int taken=robrec(nums,n-2,sum,temp)+nums[n];
        int nott=robrec(nums,n-1,sum,temp);

        return temp[n]=sum+max(taken,nott);
    }

    int rob(vector<int>& nums) {
        vector<int> temp(nums.size(),-1);
        return robrec(nums,nums.size()-1,0,temp);
    }
};