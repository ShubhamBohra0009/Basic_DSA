#include<bits/stdc++.h>
using namespace std;


// sum of AP general Formula = a, a+d, a+2d, a+3d, a+4d, a+5d.......
// or 
// float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);


int main(){

    float sum =0;
    float a=3,d=2;
    int n=5;

    for(int i=0;i<n;i++){
        sum+=a;
        a+=d;
    }
    cout<<"Sum of AP series is: "<<sum;
// float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);


    return 0;
}