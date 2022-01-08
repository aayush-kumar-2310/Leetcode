#include<bits/stdc++.h>
using namespace std;

int findInMountainArray(int key, vector<int> v){

    int s = 0, e = v.size()-1;
    int ans = -1;
    while(s <= e){
        int m = s + (e-s)/2;

        if(v[m] == key)
            ans = m;

        if(v[m] > v[m+1] and v[m] > key){
            s = m+1;
        }

        else if(v[m] > v[m+1] and v[m] < key){
            e = m-1;
        }

        else if(v[m] < v[m+1] and v[m] > key)
            e = m-1;

        else
            s = m+1;
    }
    return ans;
}

int main(){

    vector<int> v {1,5,2};
    cout<<findInMountainArray(0, v);
}