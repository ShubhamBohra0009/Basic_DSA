#include<iostream>
#include<string.h>
using namespace std;

void removeChars (string &str){

    for (int i = 0; i < str.length(); i++)
    {
        if(!(str[i] >='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )){
            str= str.substr(0,i)+ str.substr(i+1);
            i--;
        }

    }
    cout<<"After removing characters string is: "<< str;
    

}

int main(){

    string s= "take12% *&u ^$#forwardZ";

    removeChars(s);




    return 0;
}