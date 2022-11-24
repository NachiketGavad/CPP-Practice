class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int r=nums.size()-1,num=nums[0],i=1,k=nums.size(),j=1;
        // vector<int> temp;
        // temp.push_back(num);
        
        while(i<=r){
            if(nums[i]==num){
                k--;
            }
            else{
                num=nums[i];
                // temp.push_back(num);    
                nums[j++]=num;
            }
            i++;
        }
        
        // nums=temp;
        return k;
    }
};