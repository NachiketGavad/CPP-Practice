#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s=to_string(n),num1,num2;

    int st=0,e=s.size()-1;

    num1="";
    num2="";

if(s[st]=='-' && s.size()==2){
    cout<<"Palindrome";
    return 0;
}

    while(st<e){
        num1+=s[st];
        num2+=s[e];
        if(s[st]=='-'){
            num1+=s[st+1];
            num2=s[e-1]+num2;
            st++;
            e--;
        }
        if(num1!=num2){
            cout<<"Not Palindrome";
            return 0;
        }
        num1="";
        num2="";
        st++;
        e--;
    }

    cout<<"Palindrome";
    return 0;
}