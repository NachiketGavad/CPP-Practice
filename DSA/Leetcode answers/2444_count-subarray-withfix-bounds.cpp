
/*class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count=0;
        for(int i=0;i<nums.size();i++){
            bool minp=false,maxp=false,less=false,great=false;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==minK){
                    minp=true;
                }
                if(nums[j]==maxK){
                    maxp=true;
                }
                if(nums[j]<minK){
                    less=true;
                }
                if(nums[j]>maxK){
                    great=true;
                }
                // count
                if((minp && maxp) && !(less) && !(great)){
                    // cout<<i<<" "<<j<<" "<<minp<<maxp<<less<<great<<endl;
                    count++;
                }
            }
        }
        return count;
    }
};
*/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long result = 0;
        int subArrayStartIndex = 0;
        int latestMinIndex = -1;
        int latestMaxIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            // invalid sub array, start over
            if  (nums[i] < minK || nums[i] > maxK) {
                latestMinIndex = -1;
                latestMaxIndex = -1;
                subArrayStartIndex = i + 1;
            }
            if (nums[i] == minK) latestMinIndex = i;
            if (nums[i] == maxK) latestMaxIndex = i;
            result += max(0, min(latestMinIndex, latestMaxIndex) - subArrayStartIndex + 1);
        }
        return result;
    }
};