#include <bits/stdc++.h>
using namespace std;

//find factorial of number using recursion
int factorial(int n){

    // base condn -> 0! = 1
    if(n==0){
        return 1;
    }

    // fact(n) = n*fact(n-1)
    int prev_fact=factorial(n-1),fact;
    fact=n*prev_fact;
    return fact;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}