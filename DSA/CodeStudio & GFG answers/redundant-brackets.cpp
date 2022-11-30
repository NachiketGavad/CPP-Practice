//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='(' || c=='+'|| c=='-'|| c=='*'|| c=='/'){
                st.push(c);
            }
            else{
                if(c==')'){
                    bool flag=true;
                    
                    while(st.top()!='('){
                        char top=st.top();
                        
                        if(top=='+'|| top=='-'|| top=='*'|| top=='/'){
                            flag=false;
                        }
                        st.pop();
                    }
                    
                    if(flag){
                        return true;
                    }
                    st.pop(); // to remove opening bracket
                }
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends