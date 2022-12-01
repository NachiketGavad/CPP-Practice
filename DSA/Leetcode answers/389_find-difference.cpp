class Solution {
public:
    char findTheDifference(string s, string t) {
        int st=0,tt=0;
        
        for(auto i:s){
            st+=(int)i;
        }
        
        for(auto i:t){
            tt+=(int)i;
        }
        
        return tt-st;
    }
};