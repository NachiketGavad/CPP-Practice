class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double ans=0;
        vector<int> a;
        
        //The most basic approach is to merge both the sorted arrays using an auxiliary array.
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                a.push_back(nums1[i]);
                i++;
            }
            else{
                a.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            a.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            a.push_back(nums2[j]);
            j++;
        }
        
        int c=nums1.size() + nums2.size();
        
        for(auto i:a){
            cout<<i<<" ";
        }
        
        int mid=(0+c-1)/2;
        if(c%2==0){
            
            // cout<< a[mid]+a[mid+1];
            ans=(double)(a[mid]+a[mid+1])/2;
        }
        else{
            ans=a[mid];
        }
        // cout<<endl<<c<<" "<<mid<<" "<<ans;
        return ans;
    }
};