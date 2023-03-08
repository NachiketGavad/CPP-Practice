class Solution {
public:
    bool ispossible(vector<int>& piles, int h,int k){
        long temp=0;
        for(auto i:piles){
            temp=temp+(i/k)+1;
            if(i%k==0){
                temp--;
            }
        }
        // cout<<k<<" "<<temp<<" "<<h<<endl;
        if(temp<=h){
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // if(piles.size()==1 && piles[0]%h==0){
        //     return piles[0]/h;
        // }
        long long s=1,e=*max_element(piles.begin(),piles.end()),ans=e,mid=0;
        while(s<=e){
            mid=(s+e)/2;
            bool p=ispossible(piles,h,mid);
            // cout<<s<<" "<<e<<" "<<mid<<" "<<p<<endl;
            if(p){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};