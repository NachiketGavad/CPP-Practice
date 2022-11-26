class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1,carry=1;
        
        while(carry && i>=0){
            if(digits[i]+1>9){
                carry=1;
                digits[i]=0;
            }
            else{
                digits[i]++;
                carry=0;
            }
            i--;
        }
        if(carry){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};