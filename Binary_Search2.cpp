#include<bits/stdc++.h>
using namespace std; 

int search(vector<int> &v, int key){

    int s = 0;
    int e = v.size()-1;

    while(s <= e){

        int mid = s + (e-s)/2;

        if(v[mid] == key)
            return mid;

        else if(v[mid] > key){
            e = mid-1;
        }

        else if(v[mid] < key){
            s = mid+1;
        }
    }

    return -1;

}

int main(){

    vector<int> v = {-1,0,3,5,9,12};

    cout<<search(v, 2);

}