/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long s=1,e=n,mid;
        
        while(s<e){
            mid=s+e;
            mid=mid>>1;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)<0){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return n;
    }
};