#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr, preProd, sufProd(n+1);
    preProd.push_back(1);                           
    sufProd[n] = 1;

    for(int i = 0; i<n; i++){
        int x;                                                                //ARR = [1, 2, 3, 4]
        cin>>x;
        arr.push_back(x);
    }

    for(auto x:arr)                                                             //MAKES PREFIX ARRAY
        preProd.push_back(preProd.back() * x);                                  // PREFIX ARRAY = [1, 1, 2, 6, 24]

    for(int i = n-1; i>=0; i--)                                                 //MAKES SUFFIX ARRAY
        sufProd[i] = sufProd[i+1] * arr[i];                                     // SUFFIX ARRAY = [24, 24, 12, 4, 1]

    for(int i = 0; i<n; i++)
        cout<<sufProd[i+1] * preProd[i]<<" ";


}