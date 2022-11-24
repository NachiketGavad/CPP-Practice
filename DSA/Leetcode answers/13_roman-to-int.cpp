class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        for(int i=0;i<s.size();i++){
            int s1=m[s[i]];
            
            if(i+1<s.size()){
                int s2=m[s[i+1]];
                
                if(s2>s1){
                    ans=ans-s1+s2;
                    i++;
                    continue;
                }
            }
            ans+=s1;
        }
        return ans;
    }
};