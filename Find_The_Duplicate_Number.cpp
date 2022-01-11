#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums){

    int i = 0;
    while( i < nums.size()){
        
        if(i+1 != nums[i]){

            if(nums[i] != nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
            else
                return nums[i];
        }
        else
            i++;
    }
    return -1;
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

    cout<<findDuplicate(v);

}