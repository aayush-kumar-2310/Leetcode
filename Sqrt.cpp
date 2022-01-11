#include<bits/stdc++.h>
using namespace std;

int Sqrt(int x){

    int s = 0, e = x;

    while( s <= e){

        int m = s + (e-s)/2;

        if(m*m == x)
            return m;

        if(m*m < x and (m+1)*(m+1) > x)
            return m;

        else if(m*m > x)
            e = m-1;
        
        else if(m*m < x)
            s = m+1;
    }
}

int main(){

    cout<<Sqrt(8);
}