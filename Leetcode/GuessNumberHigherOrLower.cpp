#include<bits/stdc++.h>
using namespace std;

int GuessNumber(int n){
    long s = 0, e = n;
        
        while(s <= e){
            int mid = s + (e-s)/2;
            
            if(guess(mid) == 0)
                return mid;
            
            else if(guess(mid) == -1)
                e = mid-1;
            else
                s = mid+1;
        }
        return -1;
} 

int main(){

}