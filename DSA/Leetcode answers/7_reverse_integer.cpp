class Solution {
public:
    int reverse(int x) {
        int ans=0;
        
        int temp=x;
        
        while(temp){
            int dig=temp%10;
            
            // outside range case
            if(ans>INT_MAX/10 || ans < INT_MIN/10){
                return 0;
            }
            
            ans=(ans*10)+dig;
            temp/=10;
        }
        return ans;
    }
};