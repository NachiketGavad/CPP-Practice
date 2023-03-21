class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0,t=flowerbed.size(),v=t;

        // case when size is 1
        if(t==1){
            if(flowerbed[0]==1){
                if(n==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(n<=1){
                return true;
            }
            else{
                return false;
            }
        }

        // only n/2 elements can be placed in ideal condition
        if(v&1){
            v++;
        }
        v=v>>1; 
        if(n>v){
            return false;
        }

        // iterate through array
        // 3 conditions, 2 extreme points and other in between
        // also while traversing update element to 1 and increse count
        for(int i=0;i<t;i++){
            // start extreme
            if(i==0){
                if(flowerbed[i]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
            // end extreme
            else if(i==t-1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
            // middle elements
            else{
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }

        // when count is greater or equal than required, return true
        if(count>=n){
            return true;
        }
        return false;
    }
};