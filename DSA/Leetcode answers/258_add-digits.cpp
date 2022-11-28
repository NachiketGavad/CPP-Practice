class Solution {
public:
    int addDigits(int num) {
        int t=num;
        
        while(t>9){
            int temp=t,d=0; 
            while(temp>0){
                d=d+(temp%10);
                temp=temp/10;
            }
            t=d;
        }
        return t;
    }
};