class Solution {
public:
    
    bool isPossible(int mid, vector<int> &arr, int h){
        int cnt=0;
        for(int i=0; i<arr.size(); i++){
            cnt+=arr[i]/mid;
            if(arr[i]%mid!=0)
                cnt++;
        }
        
        if(cnt<=h)
            return true;
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l =1, r=1e9;
        while(l<=r){
            int mid = l+(r-l)/2;
            
            if(isPossible(mid, piles, h))
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};