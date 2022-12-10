class Solution {
public:
    char tolower(char ch){
        
        if(ch>='A' && ch<='Z'){
            ch=ch-'A'+'a';
        }
        
        return ch;
    }
    
    bool solve(string s1,string s2){
        bool flag=false;
        for(int i=0;i<s1.length();i++){
            flag=false;
            for(int j=0;j<s2.length();j++){
                // cout<<tolower(s1[i])<<" "<<s2[j]<<" ";
                if(tolower(s1[i])==s2[j]){
                    flag=true;
                    break;
                }
            }
            // cout<<endl;
            if(flag==false){
                return false;
            }
        }
        return true;
    }
    
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        vector<string> mapi={"qwertyuiop","asdfghjkl","zxcvbnm"};
        
        // word in checking
        for(int i=0;i<words.size();i++){
            //check with map
            for(int j=0;j<3;j++){
                
                // cout<<words[i]<<" "<<mapi[j]<<endl;
                
                if(solve(words[i],mapi[j])){
                    ans.push_back(words[i]);
                    break;
                }
                
            }
        }
        
        return ans;
    }
};