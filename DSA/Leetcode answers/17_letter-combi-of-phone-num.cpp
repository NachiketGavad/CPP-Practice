class Solution {
public:
    void solve(string digits,int ind,string output,vector<string>& ans,vector<string>& mapi){
        if(ind>=digits.size()){
            if(output.length()>0)
                ans.push_back(output);
            return ;
        }
        
        // index in mapi
        int index= digits[ind]-'0';
        string str=mapi[index];
        
        // recursive solution
        for(int i=0;i<str.size();i++){
            // exclude
            // no exclude because only included we need in answer
            // solve(digits,ind+1,output,ans,mapi); 
            
            //include
            output.push_back(str[i]);
            solve(digits,ind+1,output,ans,mapi);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        //edge case if given digits input is empty
        if(digits.length()==0){
            return ans;
        }
        vector<string> mapi={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        
        solve(digits,0,output,ans,mapi);
        return ans;
    }
};