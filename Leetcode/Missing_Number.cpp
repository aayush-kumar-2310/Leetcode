#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums){

    int i=0;

    while(i < nums.size()){

        if(i != nums[i] && nums[i] != nums.size())
            swap(nums[i], nums[nums[i]]);
        else
            i++;
    }

    for(int i=0; i<nums.size(); i++)
        if(nums[i] != i ){
            return i;
        }

        else
            return nums.size();
}

int main(){

    int size;
    vector<int> v;
    cin>>size;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<missingNumber(v);
}