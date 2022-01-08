#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;

    while(t--){

        int n, ans=0; cin>>n;

        map<int, int> mp;

        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x<0) x= -x;
            mp[x]++;

            if(mp[x]<=2 and x!= 0)
                ans++;
        }
        if(mp.find(0) != mp.end())
            ans++;

        cout<<ans<<endl;
    }

}