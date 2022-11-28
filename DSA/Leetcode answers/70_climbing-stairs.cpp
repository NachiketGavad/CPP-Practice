class Solution {
public:
    // vector<int> dp(46,-1);
    int climbStairs(int n) {
        
        /*
        if(dp[n]!=-1){
            return dp[n];
        }
        
        if(n==0 || n==1){
            return dp[n]=1;
        }
        
        int x,y;
        x=climbStairs(n-1);
        y=climbStairs(n-2);
        
        return dp[n]=x+y;
        */
        int f=0,s=1,ne;
        for(int i=0;i<=n;i++){
            ne=f+s;
            s=f;
            f=ne;
        }
        return ne;
    }
};