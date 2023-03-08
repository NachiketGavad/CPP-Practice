class Solution {
public:
    bool possible(vector<int>& weights, int days,int mid){
        long long sum=0,count=1;

        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }
            else{
                count++;
                if(count>days or weights[i]>mid){
                    return false;
                }
                sum=weights[i];
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s=0,e=0,mid=0,ans=0;
        if(days>weights.size()){
            return -1;
        }
        for(auto i:weights){
            e+=i;
        }
        while(s<=e){
            mid=(e+s)/2;
            if(possible(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};