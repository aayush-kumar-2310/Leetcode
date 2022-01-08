#include<bits/stdc++.h>
using namespace std;

int PeakIndex(vector<int> v){

    int s = 0, e = v.size()-1;

    while(s <= e){

        int m = s + (e-s)/2;

        if(v[m] < v[m+1]){
            s = m+1;
        }
        else if(v[m]>v[m+1] and v[m] >v[m-1]){
            return m;
        }

        else
            e = m-1;
    }

}

int main(){

}