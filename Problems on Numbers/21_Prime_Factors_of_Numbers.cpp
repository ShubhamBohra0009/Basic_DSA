#include <bits/stdc++.h>
using namespace std;

int main(){

    int num=12;

    for(int i=2;i<=num;i++){
        if(num%i==0){
            while(num%i==0){
                cout<<i<<",";
                num=num/i;
            }
        }
    }

    return 0;
}