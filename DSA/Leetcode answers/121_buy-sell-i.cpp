class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long ansmaxi=INT_MIN,maxright=INT_MIN,cur=0;
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]>maxright){
                maxright=prices[i];
            }
            cur=maxright-prices[i];
            if(cur>ansmaxi){
                ansmaxi=cur;
            }
        }
        return ansmaxi;
    }
};