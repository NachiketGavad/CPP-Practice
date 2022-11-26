class Solution {
public:
    int lengthOfLastWord(string s) {
        int e=s.size()-1,c=0;
        bool word=false;
        
        while(e>=0){
            if(word){
                if(s[e]==' '){
                    break;
                }
                c++;
            }
            else{
                if(s[e]!=' '){
                    word=true;
                    c++;
                }
            }
            e--;
        }
        return c;
    }
};