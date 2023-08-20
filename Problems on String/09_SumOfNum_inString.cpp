#include<bits/stdc++.h>
// #include<iostream>
#include<cctype>
using namespace std;

int main(){

    string s = "x0yz123";
    string n;


    for(int i=0;i<s.size();i++){

        // Here we used isdigit() function for confirming if it is digit or not.
        if(isdigit(s[i])){
            n= n+s[i];
        }
    }
    cout<<"Output is: "<<n;


    return 0;
}