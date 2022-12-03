class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length()-1,n2=num2.length()-1,carry=0;
        string ans;
        
        while(n1>=0 && n2>=0){
            int t1=int(num1[n1--])-int('0'),t2=int(num2[n2--])-int('0');
            int sum=t1+t2+carry;
            if(sum>9){
                carry=sum/10;
                ans.push_back(char(sum%10+48));
            }
            else{
                carry=0;
                ans.push_back(char(sum+48));
            }
        }
        while(n1>=0){
            int t1=int(num1[n1--])-int('0');
            int sum=t1+carry;
            if(sum>9){
                carry=sum/10;
                ans.push_back(char(sum%10+48));
            }
            else{
                carry=0;
                ans.push_back(char(sum+48));
            }
        }
        while(n2>=0){
            int t2=int(num2[n2--])-int('0');
            int sum=t2+carry;
            if(sum>9){
                carry=sum/10;
                ans.push_back(char(sum%10+48));
            }
            else{
                carry=0;
                ans.push_back(char(sum+48));
            }
        }
        if(carry>0){
            ans.push_back(char(carry+48));
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};