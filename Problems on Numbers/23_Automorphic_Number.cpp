#include<bits/stdc++.h>
using namespace std;

int main(){

    int num=76;
    int sq=num*num;

    while(num>0){
        if(num%10!=sq%10){
            cout<<"Not Automorphic Number";
            return 0;
        }
        num/=10;
        sq/=10;
    }
    cout<<"Automorphic Number";



    return 0;
}