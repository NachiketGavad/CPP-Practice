class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int maxi=0;
        if(s.size()==0 or g.size()==0){
            return 0;
        }
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j>=g.size() or (g[j]>s[i]) && i>=s.size()-1){
                break;
            }
            if(g[j]<=s[i]){
                maxi++;
                j++;
            }
        }
        return maxi;
    }
};