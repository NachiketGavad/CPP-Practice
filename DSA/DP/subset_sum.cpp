#include <bits/stdc++.h>
using namespace std;
int t[6][11];

bool subset(int a[],int n,int sum){
    //recursion
    /*
    if(n==0)
        return false;
    if(sum==0)
        return true;
    
    if(a[n-1]>sum){
        return subset(a,n-1,sum);
    }
    else{
        return subset(a,n-1,sum-a[n-1]) || subset(a,n-1,sum);
    }
*/
    if(t[n][sum]!=-1){
        return t[n][sum];
    }
    if(n==0)
        return t[n][sum]=false;
    if(sum==0)
        return t[n][sum]=true;
    
    if(a[n-1]>sum){
        return t[n][sum]=subset(a,n-1,sum);
    }
    else{
        return t[n][sum]=subset(a,n-1,sum-a[n-1]) || subset(a,n-1,sum);
    }
}

int main(){
    memset(t,-1,sizeof(t));
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<subset(a,n,sum);

    return 0;
}