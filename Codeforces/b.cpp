#include<bits/stdc++.h>
using namespace std;

int countNum(int N)
{
    int ans = (int)sqrt(N) + (int)cbrt(N)- (int)(sqrt(cbrt(N)));
 
    return ans;
}

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        cout<<countNum(n)<<endl;
    }
}