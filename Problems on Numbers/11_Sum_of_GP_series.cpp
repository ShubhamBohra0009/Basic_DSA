#include<bits/stdc++.h>
using namespace std;

// sum of GP general Formula = a+ a+r, a+r^2, a+r^3 .......
// or 
// float sum = a*(r^n-1)/r-1;

int main(){

    float sum =0;
    float a=3,r=2;
    int n=5;

    for(int i=0;i<n;i++){
        sum+=a;
        a*=r;
    }
    cout<<"Sum of GP series is: "<<sum;
// float sum = a*(r^n-1)/r-1;

    return 0;
}