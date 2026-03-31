class Solution {
public:
    long long countZeroes(long long x){
        long long count=0;
        while(x>0){
            x/=5;
            count+=x;
        }
        return count;
    }
    int preimageSizeFZF(int k) {
        long long low=0,high= 5LL*k;
        long long mid= low+(high-low)/2;
        
        while(low<=high){
            long long mid = low+(high-low)/2;
            long long zeroes = countZeroes(mid);
            if(zeroes<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(countZeroes(low)==k){
            return 5;
        }
        return 0;
    }
};

Time Complexity: O((log k)²)
Space Complexity: O(1)