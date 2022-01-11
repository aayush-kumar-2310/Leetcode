#include<bits/stdc++.h>
using namespace std;

int searchHelper(vector<int> &v, int s, int e, int key){

    if(s > e)
        return -1;

    int mid = s + (e-s)/2;

    if(v[mid] == key)
        return mid;

    if(v[mid] > key)
        return searchHelper(v, s, mid-1, key);

    else if(v[mid] < key)
        return searchHelper(v, mid+1, e, key);
    }


int search(vector<int> &v, int key){
    
    return searchHelper(v, 0, v.size()-1, key);
}

int main(){

    vector<int> v = {-1,0,3,5,9,12};

    cout<<search(v, 2);

}