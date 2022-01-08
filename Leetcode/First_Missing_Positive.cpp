#include<bits/stdc++.h>
using namespace std;

int MissingPositive(vector<int> &nums){

    int i = 0;
    while(i < nums.size()){
        if(nums[i] != nums[nums[i] - 1] && nums[i]>0 && nums[i]<=nums.size()){
                swap(nums[i], nums[nums[i]-1]);
        }
        else
            i++;
    }

    for(int i=0; i<nums.size(); i++){
        if(i+1 != nums[i])
            return i+1;
    }

    return nums.size()+1;
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

    cout<<MissingPositive(v);
}