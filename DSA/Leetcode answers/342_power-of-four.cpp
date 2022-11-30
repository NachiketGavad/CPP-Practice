class Solution {
public:
    bool isPowerOfFour(int n) {
        int temp=n;
        
        while(temp>0){
            if(temp%4==0){
                temp=temp/4;
            }
            else if(temp==1){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};