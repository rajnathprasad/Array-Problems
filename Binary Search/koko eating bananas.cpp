class Solution {
public:
    long long calculateTotalHours(vector <int> v, int hourly){
        long long totalH=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            totalH += ((long long)v[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
         int low=1;
         int high = *max_element(piles.begin(), piles.end());
         int ans=high;
         while(low<=high){
            int mid = low+(high-low)/2;
            long long totalHours=calculateTotalHours(piles,mid);
            if(totalHours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }
         return ans;
    }
};

// TC : nlog(max(piles))
// SC : O(1)