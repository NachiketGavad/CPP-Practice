#include <bits/stdc++.h>
using namespace std;

//find n**p using recursion
int power(int n,int p){
    int ans;

    //base condition -> n**0 = 1
    if(p==0){
        return 1;
    }

    // n*(n**(p-1))
    return n*power(n,p-1);
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}