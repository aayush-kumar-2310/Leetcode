#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int> &nums){

    int i = 0;
    vector<int> v;
    while( i < nums.size()){

        if(i+1 != nums[i] && nums[i] != nums[nums[i]-1]){
            swap(nums[i], nums[nums[i]-1]);
        }
        else
            i++;
    }

    for(int i=0; i<nums.size(); i++)
        if(i+1 != nums[i])
            v.push_back(nums[i]);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}   

int main() {

    int size;
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    findDuplicate(v);
} 