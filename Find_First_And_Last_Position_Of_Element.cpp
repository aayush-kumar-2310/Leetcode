#include<bits/stdc++.h>
using namespace std;

vector<int> ans1;

vector<int> searchIndex(vector<int> v, int key){

    int s = 0, e = v.size()-1;
    vector<int> ans;
    int a= -1, b= -1;

    while(s <= e){

        int mid = s + (e-s)/2;

        if(v[mid] ==  key){
            e = mid-1;
            a = mid;
        }

        else if(v[mid] > key)
            e = mid-1;

        else
            s = mid+1;
    }

    s = 0;
    e = v.size()-1;
    
    while(s <= e){

        int mid = s + (e-s)/2;

        if(v[mid] ==  key){
            s = mid+1;
            b = mid;
        }

        else if(v[mid] > key)
            e = mid-1;

        else
            s = mid+1;
    }
    ans.push_back(a);
    ans.push_back(b);
    ans1.push_back(a);
    ans1.push_back(b);
    return ans;
}

int main(){

    vector<int>v {5,7,7,8,8,10};
    searchIndex(v, 6);
    for(auto x:ans1)
        cout<<x<<" ";   
}