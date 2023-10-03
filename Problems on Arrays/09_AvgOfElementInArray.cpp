#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){

    int arr[]= {1,2,3,4,5};

    int len= sizeof(arr)/sizeof(int);
    // cout<<len;
    int avg=0;
    for(int i=0;i<len;i++){
        avg+=arr[i];
    }
    // cout<<avg<<endl;
    avg/=len;
    cout<<avg;




    return 0;
}