#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char str []= {"abcdcba"};
    //string str = "abcdcba";
    // cout<<strlen(str);
    int low=0;
    int high= strlen(str)-1;

    while(high>low){
        if(str[low]!=str[high]){
            cout<<"It's not a palindrome string";
            return 0;
        }
            low++;
            high--;
    }
    cout<<"It's a palindrome string";



    return 0;
}