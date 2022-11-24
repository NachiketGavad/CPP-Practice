class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        // find length of shortest string
        int min_len=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<min_len){
                min_len=strs[i].size();
            }
        }
        
        // iterate through each index
        for(int i=0;i<min_len;i++){
            
            bool flag=true;
            char ch=strs[0][i];
            
            // compare char of other strings with current
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    flag=false;
                    break;
                }
            }

            // if flag not become false push char to ans and continue
            if(flag){
                ans.push_back(ch);
            }else{
                break;
            }
        }
        return ans;
    }
};