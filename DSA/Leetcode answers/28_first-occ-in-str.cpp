class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size(),n=needle.size();
        if(n>m){
            return -1;
        }
        // return haystack.find(needle);
        for(int i=0;i<=m-n;i++){
            // cout<<i;
            int k=0,c=0,j=0;
            if(haystack[i]==needle[0]){
                c=1;
                j=i+1;
                int k=1;
                while((k<n) && (j<m) && (haystack[j++]==needle[k++])){
                    // cout<<haystack[j++]<<" "<<needle[k++];
                    c++;
                }
                // cout<<c;
                if(c==n){
                    return i;
                }
            }
        }
        return -1;
    }
};