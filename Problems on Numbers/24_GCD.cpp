// Greatest Common Divisor

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    int a=4;
    int b=8;
    int minimum= min(a,b);

    for(int i=minimum ;i>=1;i--)
    {
        if(a%i==0 && b%i==0){
            cout<<i<<" is GCD of "<<a<<" & "<<b;
            return 0;
            // break;

        }
    }
    cout<<"There is no GCD for them";
    return 0;
}