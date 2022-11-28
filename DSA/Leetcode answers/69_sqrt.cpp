class Solution {
public:
    int mySqrt(int x) {
        long long s=0,e=x,mid;
        int ans=0;
        
        while(s<=e){
            mid=(s+e)/2;
            
            if(mid*mid<=x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};