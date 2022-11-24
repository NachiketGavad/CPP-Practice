class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),maxl[n],maxr[n],maxil=INT_MIN,maxir=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(height[i]>maxil){
                maxil=height[i];
            }
            maxl[i]=maxil;
        }
        for(int i=n-1;i>=0;i--){
            if(height[i]>maxir){
                maxir=height[i];
            }
            maxr[i]=maxir;
        }
        
        int ans=0;
        for(int i=1;i<n-1;i++){
            // cout<<maxl[i]<<" "<<maxr[i]<<endl;
            int h=min(maxl[i-1],maxr[i+1]);
            // cout<<h<<" "<<height[i]<<endl;
            
            if(height[i]<h){
                ans+=(h-height[i]);
            }
            
        }
        return ans;
    }
};