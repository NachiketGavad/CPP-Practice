class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0,n=timeSeries.size();

        for(int i=n-1;i>=0;i--){
            if(i!=n-1 && timeSeries[i]+duration>timeSeries[i+1]){
                ans+=timeSeries[i+1]-timeSeries[i];
            }
            else{
                ans+=duration;
            }
        }
        return ans;
    }
};