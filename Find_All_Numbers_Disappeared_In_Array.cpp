#include<bits/stdc++.h>
using namespace std;

vector<int> findNumber(vector<int> &nums){

    int i =0 ;
    vector<int> v;

    while(i < nums.size()){

        if(nums[i] != i+1 && nums[nums[i]-1] != nums[i])
            swap(nums[i], nums[nums[i]-1]);

        else{
            i++;
        }
            
    }


    for(int i=0; i<nums.size(); i++){
        if(i+1 != nums[i])
            v.push_back(i+1);
    }

    return v;
}

int main(){

    int size;
    cin>>size;

    vector<int> v;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    findNumber(v);




}