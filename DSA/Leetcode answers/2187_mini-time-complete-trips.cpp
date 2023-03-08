class Solution {
public:
    long long mul(int a,int b){
        long long ans=0;
        if(a<b){
            swap(a,b);
        }
        while(b){
            ans+=a;
            b--;
        }
        return ans;
    }

    bool ispossible(vector<int>& time,long long n, long long totalTrips){
        long long int temp=0;
        for(auto i:time){
            temp+=(n/i);
        }
        if(temp>=totalTrips){
            return true;
        }
        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        if(time.size()==1){
            return mul(time[0],totalTrips);
        }
        long long ans=0,s=0,e=mul(*(min_element(time.begin(),time.end())),totalTrips),mid=0;
        while(s<=e){
            mid=(e+s)/2;
            if(ispossible(time,mid,totalTrips)){
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

/*
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans=0;
        sort(time.begin(),time.end());
        vector<int> complete(time.size());

        while(totalTrips>0){
            for(int i=0;i<complete.size();i++){
                complete[i]=complete[i]+1;
                if(complete[i]>=time[i]){
                    totalTrips--;
                    complete[i]=0;
                }
            }
            ans++;
        }
        return ans;
    }
};

*/