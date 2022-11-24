//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    int subset(int arr[],int n, int sum){
        
        bool t[n+1][sum+1];
        vector<int> pos;
        
        for(int i=0;i<=n;i++){
            t[i][0]=true;
        }
        for(int i=1;i<=sum;i++){
            t[0][i]=false;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                
                if(arr[i-1]>j){
                    t[i][j]=t[i-1][j];
                }
                else{
                    t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
                }
                
            }
        }
        
        for(int i=1;i<=sum/2;i++){
            if(t[n][i]==true)
                {pos.push_back(i);}
        }
        
        
        
	    int mini=INT_MAX;
	    for(int i=0;i<pos.size();i++){
	        int p=sum-(2*pos[i]);
	        if(p<mini){
	            mini=p;
	        }
	        // cout<<pos[i]<<" ";
	    }

	    return mini;
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int total=0;
	    for(int i=0;i<n;i++){
	        total+=arr[i];
	    }
	    
	    return subset(arr,n,total);
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends