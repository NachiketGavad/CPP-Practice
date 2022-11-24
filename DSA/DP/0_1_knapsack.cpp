#include <bits/stdc++.h>
using namespace std;
/*
int t[6][11];
memset(t,-1,sizeof(t));
*/

int knapsack(int wt[],int val[],int w,int n){

    //base condition, no elements or knapsack size is 0
    /*
    if(n==0 or w==0){
        return 0;
    }

    if(wt[n-1]>w){
        return knapsack(wt,val,w,n-1); //can't include
    }
    // 2 choices, since we need max profit
        return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    //base condition, no elements or knapsack size is 0
    */

   /*
   if(t[n][w]!=-1){
    return t[n][w];
   }

    if(n==0 or w==0){
        return t[n][w]= 0;
    }

    if(wt[n-1]>w){
        return t[n][w]=knapsack(wt,val,w,n-1); //can't include
    }
    // 2 choices, since we need max profit
        return t[n][w]=max(knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
*/

// /*
int t[n+1][w+1];

for(int i=0;i<=n;i++){
    for(int j=0;j<=w;j++){
        if(i==0 or j==0){
            t[i][j]=0;
            continue;
        }

        if(wt[i-1]>j){ // j not w, at this moment j is capacity of knapsack
            t[i][j]=t[i-1][j];
        }
        else{
            t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]); //was not adding val[i-1] to selected item so giving 0 value;
        }
    }
}
// */
/*
for(int i=0;i<=n;i++){
    for(int j=0;j<=w;j++){
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
*/
    return t[n][w];
}

int main(){
    int wt[5]={2,3,5,6,4},val[5]={5,10,9,7,2},w=10,n=5;

    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }

    cout << knapsack(wt,val,w,n);

    return 0;
}