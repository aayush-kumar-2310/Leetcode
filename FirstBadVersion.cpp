#include<bits/stdc++.h>
using namespace std;

int firstBadVersion(int n) {
      
        long s = 0, e = n;
        long ans;
        
        while(s <= e){
            long mid = s + (e-s)/2;
            
            if(isBadVersion(n) == 0){
                ans = mid;
                e = mid-1;
            }
            
            else
                s = mid+1;
        }
        return ans;
    }

int main(){

}