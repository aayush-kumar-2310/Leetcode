#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int> &v){
    
    int pivot = 0, s = 0, e = v.size()-1;

    while(s <= e){
        int mid = s + (e-s)/2;
        if( (v[mid] < v[mid-1]) or (v[mid] < v[mid-1]) or ( v[mid] > v[mid-1] and v[mid] > v[mid+1]) ) 
            return mid;

        else if(v[mid] < v[mid+1])
            s = mid+1;
        else if(v[mid-1] > v[mid])
            e = mid+1;
    }
    return pivot;
}

int search(vector<int> &v, int key){

    int s = 0, e = v.size()-1, pvt = 0;

    if(v[0] > v[e])
        pvt = findIndex(v);

    
     
    s=0, e = pvt;

    while(s <= e){
        int mid = s + (e-s)/2;
        if(v[mid] == key)
            return mid;

        else if(v[mid] < key)
            s = mid+1;
        else
            e = mid-1;
    }

    s = pvt +1, e = v.size()-1;
    while(s <= e){

        int mid = s + (e-s)/2;
        if(v[mid] == key)
            return mid;

        else if(v[mid] < key)
            s = mid+1;
        else
            e = mid-1;
    }
    return -1;
}

int main(){

    vector<int> v {3,1};
    //cout<<findIndex(v);
    cout<<search(v, 0);

}