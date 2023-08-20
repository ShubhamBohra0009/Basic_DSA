#include<iostream>
using namespace std;

    void ispalindrome(int val){
        int r=0;
        //initialize with zero rather than a garbage value
        int rev_num=0;
        int num=val;

        while(num>0){

        r=num%10;
        rev_num=rev_num*10+r;
        num=num/10;
        }
        if(rev_num==val){
            cout<<"Number is Palindrome";
        }
        else{
            cout<<"It's not palindrome";
        }
    }

int main(){
    int val=12321;

    ispalindrome(val);

    return 0 ;
}