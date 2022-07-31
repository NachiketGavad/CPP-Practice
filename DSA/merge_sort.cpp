//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1=m-l+1;
         int n2=r-m;
         
         int a[n1],b[n2];   //temp arrays for comparing and traversing
         
         for(int i=0;i<n1;i++){
             a[i]=arr[l+i];
         }
         for(int i=0;i<n1;i++){
             b[i]=arr[m+1+i];
         }
         
         int i=0,j=0,k=l;   //i & j pointers to 2 temp arrays and k for main array swapping and traversal
         
         while(i<n1 && j<n2){   //loop until any one pointer reaches end
             if(a[i]<b[j]){
                 arr[k]=a[i];
                 k++;
                 i++;
             }
             else{
                 arr[k]=b[j];
                 k++;
                 j++;
             }
         }
         
         while(i<n1){   //loop to insert remaining elements in temp array 1 if 2nd pointer reaches end
             arr[k]=a[i];
             k++;
             i++;
         }
         while(j<n2){   //loop to insert remaining elements in temp array 2 if 1st pointer reaches end
             arr[k]=b[j];
             k++;
             j++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){    //if l==r it means there is only one element
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            
            merge(arr,l,mid,r);
        }
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends