class Solution {
public:
    void merge(vector<int>& nums,int s,int mid,int e){
        int l1=mid-s+1,l2=e-mid;

        // remember to write arrays this way for deletion
        int *a = new int[l1];
        int *b = new int[l2];
        int l=s;
    
        // take care of length variable
        for(int i=0;i<l1;i++){
            a[i]=nums[l++];
        }
        l=mid+1;
        for(int i=0;i<l2;i++){
            b[i]=nums[l++];
        }
        int i=0,j=0,k=s;
        while(i<l1 && j<l2){
            if(a[i]<b[j]){
                nums[k]=a[i];
                k++;i++;
            }
            // remember about else otherwise TLE
            else{
                nums[k]=b[j];
                k++;j++;
            }
        }
        while(i<l1){
            nums[k]=a[i];
            k++;i++;
        }
        while(j<l2){
            nums[k]=b[j];
            k++;j++;
        }

        // delete temp
        delete []a;
        delete []b;
    }
    void mergesort(vector<int>& nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        mergesort(nums,s,mid);
        mergesort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};