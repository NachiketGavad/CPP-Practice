class Solution {
public:
    int fib(int n) {
        //recursion
        /*
        if(n==0 or n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
        */
        
        //memoization
        /*
        if(n==0 or n==1){
            return t[n]=n;
        }
        */
        // return t[n]=fib(n-1)+fib(n-2);
        
        //tabulation
        int t[n+1];
        for(int i=0;i<=n;i++){
            if(i==0 or i==1){
                t[i]=i;
            }
            else{
                t[i]=t[i-1]+t[i-2];
            }
        }
        return t[n];
    }
};