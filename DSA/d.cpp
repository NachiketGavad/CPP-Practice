#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */   
    long long x;
    cin >>x;
    long long t[x];
    
    for(long long i=0;i<x;i++){
        cin >>t[i];
    }
    
    sort(t,t+x);
    
    long long time=0,sat=0;
    
    for(long long i=0;i<x;i++){
        
        if(time<=t[i]){
            sat++;
        }
        
        time=time+t[i];
    }
    
    cout<<sat;
    
    return 0;
}
